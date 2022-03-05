public class Demo{
	public static void main(String[] args){
		String s="DSA is fun but also tricky!!";
		int i=0;
        int j=0;
        char[] arr=s.toCharArray();
        while(i<arr.length){
            while(j<arr.length && arr[j]!=' '){
                j++;
            }
            reverse(arr,i,j-1);
            j++;
            i=j;
        }
        System.out.println(new String(arr));
	}
	static void reverse(char[] arr,int i,int j){
         while (i < j) {
            swap(arr, i, j);
            i++;
            j--;
    }
    }
    static void swap(char[] arr,int i,int j){
            char temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
}