//You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
//Find two lines that together with the x-axis form a container, such that the container contains the most water.
//Return the maximum amount of water a container can store.
import java.util.Arrays;
import java.lang.Math;
public class Max_water{
    public static void main(String[] args){
        int[] arr={1,1};
        int ans=solution(arr);
        System.out.println("Maximum area is: "+ans);
    }
    static int solution(int[] arr){
        int max_area=0;
        int start=0;
        int end=arr.length-1;
        while(start<end){
            if(arr[start]<arr[end]){
                max_area=Math.max(max_area,arr[start]*(end-start));
                start++;
            }
            else{
                max_area=Math.max(max_area,arr[end]*(end-start));
                end--;
            }
        }
        return max_area;
    }
}
