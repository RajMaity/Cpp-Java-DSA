//Given two sorted arrays, the task is to merge them in a sorted manner.
//Input: arr1[] = { 5, 8, 9}, arr2[] = {4, 7, 8} 
//Output: arr3[] = {4, 5, 7, 8, 8, 9} 
#include<iostream>
using namespace std;
void sort(int ans[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(ans[j-1]>ans[j]){
                int temp=ans[j-1];
                ans[j-1]=ans[j];
                ans[j]=temp;
            }
        }
    }
}
int main()
{
    int arr1[]={5, 8, 9};
    int arr2[]={4, 7, 8};
    int len1=sizeof(arr1)/sizeof(arr1[0]);
    int len2=sizeof(arr2)/sizeof(arr2[0]);
    int ans[len1+len2];
    for(int i=0,j=len1;i<len1;i++,j++){
        ans[i]=arr1[i];
        ans[j]=arr2[i];
    }
    sort(ans,len1+len2);
    for(int i=0;i<len1+len2;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
