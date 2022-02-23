//Binary search
//Binary Search only works for sorted arrays
//If target element is found in array, return the index, else return -1
public class BinarySearch{
	public static void main(String[] args){
		int[] arr={1,2,3,4,5,6};
		int target=6;
		System.out.println("The index of the target is:"+binarySearch(arr,target));
	}
	static int binarySearch(int[] arr,int target){
		int start=0;
		int end=arr.length-1;
		while(start<=end){
			int mid=start+(end-start)/2;
			if(target<arr[mid])
				end=mid-1;
			else if(target>arr[mid])
				start=mid+1;
			else
				return mid;
		}
		return -1;
	}
}