#include<bits/stdc++.h>
using namespace std;
void heap(int a[],int i ; int n){
        int left = 2*i+1
        int right = 2*i+2;
        int largest = i;
        if(left<n && arr[left]> arr[largest]){
            largest = left;
        }
        if(right<n && arr[right]> arr[largest]){
            largest = right;
        }
        if(largest!=i){
            swap(a[i], a[largest]);
            heap(a, n, largest);
        }
    }

    void buildHeap(int a[], int n){
        for(int i=n/2;i>=1;i--){
            heap(a, n, i);
        }
    }

    void heapSort(int a[], int n){
        buildHeap(a, n);
        for(int i = n; i > 1;i--){
            swap(a[1],a[i]);
            heap(a,1,i-1);  
        }
    }

    void print(int a [], int n){
        for(int i = 1; i < n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
int main (){
    int a[n];
int n;
cin>>n;

for(int i = 1; i <= n; i++){
    cin>>a[i];
}
cout<<"orignal array";
print(a,n);
cout<<"sorted array";
print(a,n);
return 0;
return 0;
}