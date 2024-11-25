// #include<bits/stdc++.h>
// using namespace std;
// void heap(int a[],int i , int n){
//         int largest = i;
//         int left = 2*i+1;
//         int right = 2*i+2;
//         if(left<=n && a[left]> a[largest]){
//             largest = left;
//         }
//         if(right<=n && a[right]> a[largest]){
//             largest = right;
//         }
//         if(largest!=i){
//             swap(a[i], a[largest]);
//             heap(a, n, largest);
//         }
//     }

//     void buildHeap(int a[], int n){
//         for(int i=n/2-1;i>=0;i--){
//             heap(a, n, i);
//         }
//     }

//     void heapSort(int a[], int n){
//         buildHeap(a, n);
//         for(int i = n-1; i > 0;i--){
//             swap(a[0],a[i]);
//             heap(a,1,i-0);  
//         }
//     }

//     void print(int a [], int n){
//         for(int i = 0; i < n; i++){
//             cout<<a[i]<<" ";
//         }
//         cout<<endl;
//     }
// int main (){
//     int n;
//     int a[n];
//     cin>>n;

// for(int i = 0; i <= n; i++){
//     cin>>a[i];
// }
// cout<<"orignal array";
// print(a,n);
// cout<<"sorted array";
// print(a,n);
// return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void heapify(int a[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest]) {
        largest = left;
    }
    if (right < n && a[right] > a[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void buildHeap(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }
}

void heapSort(int a[], int n) {
    buildHeap(a, n);
    sort(a,a+n,greater<int>());
}

void deletemin(int a[], int& n) {
    int minelem = 100;
    int index= -1;
    for(int i = 0 ; i < n ; i++){
        if(a[i]<a[minelem]){
            minelem = i ;
            index = i;
        }
        a[index]= a[n-1];
        n--;
        heapify(a, n, index);
    }
}

void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
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

    heapSort(a, n);

    cout << "Sorted array: ";
    print(a, n);

    return 0;
}
