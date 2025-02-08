import java.util.*;

public class InsertionSort {
    public static void Insertion(int arr[], int n){
        for(int i =1 ; i < n ; i++){
            int temp = arr[i];
            int j = i -1;
            while(j >= 0 && arr[j] > temp){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1]= temp;
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("length: ");
        int n = sc.nextInt(), arr[] = new int[n];
        for(int i = 0 ; i< n; i++ ){
            arr[i] = sc.nextInt();
        }
        Insertion(arr, n );
        System.out.println("Sorted: ");
        for(int i = 0 ; i < n ; i++){
            System.out.print(arr[i] + " ");
        }   

        sc.close();
    }

}
