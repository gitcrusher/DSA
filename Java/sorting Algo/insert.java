import java.util.*;
public class insert {
    public static void Insert(int arr[], int n ){
        for(int i = 1; i < n;i++){
            int temp = arr[i];
            int j = i -1;
            while(j>=0&&arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }
    }

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements: ");
        for(int i = 0 ; i <n ; i ++){
            arr[i]= sc.nextInt();
        }
        Insert(arr,n);
        System.out.println("sorted array: ");
        for(int i = 0 ; i <n ; i ++){
            System.out.print(arr[i]+" ");
        }
        sc.close();
    }
}
