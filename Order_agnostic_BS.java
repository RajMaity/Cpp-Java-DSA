//Order agnostic binary search can search in both ascending or descending order sorted array
//If target is found, return index, else return -1;
public class Order_agnostic_BS{
	public static void main(String[] args){
		int[] arr1={1,2,3,4,5};
		int[] arr2={5,4,3,2,1};
		int target=5;
		System.out.println("The target element in arr1:"+search(arr1,target));
		System.out.println("The Target element in arr2:"+search(arr2,target));
	}
	static int search(int[] arr,int target){
		int start=0;
		int end=arr.length-1;
		boolean isAsc=arr[start]<arr[end];
		while(start<=end){
			int mid=start+(end-start)/2;
			if(arr[mid]==target)
				return mid;
			if(isAsc){
				if(target<arr[mid])
					end=mid-1;
				else
					start=mid+1;
			}
			else{
				if(target<arr[mid])
					start=mid+1;
				else
					end=mid-1;
			}
		}
		return -1;
	}
}