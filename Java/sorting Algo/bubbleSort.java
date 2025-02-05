
import java.util.*;

public class bubbleSort {
    public static void BubbleSort(int[] arr) {
        int n = arr.length;
        boolean value;
        for (int i = 0; i < n - 1; i++) {
            value = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    value = true;
                }
            }
            if (!value) break;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the next number : ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the array elements : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Original array: " + Arrays.toString(arr));
        
        BubbleSort(arr);
        
        System.out.println("Sorted array: " + Arrays.toString(arr));
        sc.close();
    }
}
