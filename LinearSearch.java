//Linear Search
//If the target element is found in the array, then return index,if not found, then return -1
import java.util.Scanner;
public class LinearSearch{
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		int n,target;
		System.out.println("Enter the length of array:");
		n=in.nextInt();
		int[] arr=new int[n];
		System.out.println("Enter the array:");
		for(int i=0;i<n;i++){
			arr[i]=in.nextInt();
		}
		System.out.println("Enter the target element:");
		target=in.nextInt();
		System.out.println("The index of target is:"+linearSearch(arr,n,target));
	}
	static int linearSearch(int[] arr,int n,int target){
		for(int i=0;i<n;i++){
			if(arr[i]==target)
				return i;
		}
		return -1;
	}
}