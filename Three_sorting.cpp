//Bubble Sort
//Selection Sort
//Insertion Sort
#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
	for(int i=0;i<n;i++){
		int min_index=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_index]){
				min_index=j;
			}
		}
		int temp=arr[min_index];
		arr[min_index]=arr[i];
		arr[i]=temp;
	}
}
void bubbleSort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i;j++){
			if(arr[j-1]>arr[j]){
				int temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void insertionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j>0;j--){
			if(arr[j]<arr[j-1]){
				int temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
}
int main(){
	int arr1[]={3,4,-2,1,0};
	int arr2[]={3,4,-2,1,0};
	int arr3[]={3,4,-2,1,0};
	int len1=sizeof(arr1)/sizeof(arr1[0]);
	int len2=len1;
	int len3=len2;
	selectionSort(arr1,len1);
	cout<<"Selection sort:"<<endl;
	for(int i=0;i<len1;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	bubbleSort(arr2,len2);
	cout<<"Bubble sort:"<<endl;
	for(int i=0;i<len2;i++){
		cout<<arr2[i]<<" ";
	}
	cout<<endl;
	insertionSort(arr3,len3);
	cout<<"Insertion sort:"<<endl;
	for(int i=0;i<len3;i++){
		cout<<arr3[i]<<" ";
	}
	return 0;
}
