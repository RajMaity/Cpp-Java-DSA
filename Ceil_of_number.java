//Ceiling of a number
//Use Binary Search
import java.util.Scanner;
public class Ceil_of_number{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        int target=in.nextInt();
        int ans=binarySearch(arr,target);
        System.out.println("The ceil of the number is: "+ans);
    }
    static int binarySearch(int[] arr,int target){
        int start=0;
        int end=arr.length-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target==arr[mid])
                return arr[mid];
            else if(target<arr[mid])
                end=mid-1;
            else
                start=mid+1;
        }
        return arr[start];
    }
}
