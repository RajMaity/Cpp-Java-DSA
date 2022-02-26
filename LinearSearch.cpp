//Linear search in C++
//The function will search linearly in the array and if found, return it's index, else return -1
#include<iostream>
using namespace std;
int linearSearch(int arr[],int target,int len){
    for(int i=0;i<len;i++){
        if(target==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,-3,0,4,2,19};
    int target=-3;
    int len=sizeof(arr)/sizeof(arr[0]);
    int ans=linearSearch(arr,target,len);
    cout<<"Index of the target is: "<<ans<<endl;
    return 0;
}