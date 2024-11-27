#include<bits/stdc++.h>

using namespace std;
    void heapify(int arr[],int n , int i ){
        int largest = i ; 
        int left = 2*i;
        int right = 2* i + 1;
        if (left < n && arr[left]>arr[largest]){
            largest = left;
        }
        if(right < n && arr[right]>arr[largest]){
            largest = right;
        }
        if (largest!=i){
            swap(arr[i], arr[largest]);
            heapify(arr, n , largest);
        }
    }

    void builheap(int arr[], int n){
        for (int i = 0 ; i < n ; i++){
            heapify(arr, n , i );
        }
    }

    void heap_sort(int arr[], int n ){
        builheap(arr, n);
        sort(arr,arr+n);
    }

    void odd(int arr[], int n){
        for(int i = 0 ; i < n ; i++){
            if(arr[i]%2!=0){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }

    void print (int arr[], int n){
        for(int i = 0 ; i < n ;i++){
            cout<<arr[i]<<" "; 
        }
        cout<<endl;
    }


int main (){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Original array: ";
    print(a, n);

    heap_sort(a, n);

    cout << "Sorted array: ";
    print(a, n);

    cout<<"odd elements: ";
    odd(a,n);
return 0;
}