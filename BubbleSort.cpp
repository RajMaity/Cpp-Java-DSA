//Bubble sort in c++
#include<iostream>
using namespace std;
void sort(int arr[],int len){
    for(int i=0;i<len;i++){
        for(int j=1;j<len-i;j++){
            if(arr[j-1]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,-1,-9,0,22};
    int len=sizeof(arr)/sizeof(arr[0]);
    sort(arr,len);
    return 0;
}