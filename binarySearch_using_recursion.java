//Binary Search using recursion
public class binarySearch_using_recursion{
    public static void main(String[] args){
        int[] arr={1,2,3,4,5};
        int target=5;
        System.out.println("Index of the target is:"+binarySearch(arr,target,0,arr.length-1));
    }
    static int binarySearch(int[] arr,int target,int start, int end){
        if(start>end)
            return -1;
        int mid=start+(end-start)/2;
        if(target==arr[mid])
            return mid;
        if(target<arr[mid])
            return binarySearch(arr,target,start,mid-1);
        return binarySearch(arr,target,mid+1,end);
    }
}
