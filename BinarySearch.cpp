//Binary Search in C++
//The target is searched in the array using binary search, if found, return its index,else return -1
//Binary search is faster than linear search
#include<iostream>
using namespace std;
int binarySearch(int arr[],int target,int len){
    int start=0;
    int end=len-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(target<arr[mid]){
            end=mid-1;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,33,44,50,72};
    int target=-2;
    int len=sizeof(arr)/sizeof(arr[0]);
    int ans=binarySearch(arr,target,len);
    cout<<"The index of the target is: "<<ans<<endl;
    return 0;
}