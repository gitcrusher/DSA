import java.util.*;

class MergeSort {
    public static void mergeSort(int[] arr, int low, int high) {
        if (low < high) {  // Corrected base case condition
            int mid = low + (high - low) / 2;  // Prevents overflow
            mergeSort(arr, low, mid);  // Sort left half
            mergeSort(arr, mid + 1, high);  // Sort right half
            merge(arr, low, mid, high);  // Merge both halves
        }
    }

    private static void merge(int[] arr, int low, int mid, int high) {
        int left = low;
        int right = mid + 1;
        int[] temp = new int[high - low + 1];
        int k = 0;
        
        // Merge sorted halves into temp array
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp[k++] = arr[left++];
            } else {
                temp[k++] = arr[right++];
            }
        }
        
        // Copy remaining elements from left half
        while (left <= mid) {
            temp[k++] = arr[left++];
        
        // Copy remaining elements from right half
        while (right <= high) {
            temp[k++] = arr[right++];
        }
        
        // Copy sorted temp array back to original array
        System.arraycopy(temp, 0, arr, low, temp.length);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();
        int[] arr = new int[n];
        
        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        
        System.out.println("Unsorted array: " + Arrays.toString(arr));
        mergeSort(arr, 0, n - 1);
        System.out.println("Sorted array: " + Arrays.toString(arr));
        scanner.close();
    }
}
