#include<bits/stdc++.h>
using namespace std;
    void Maxheapify(int a[],int n , int i){
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;
        if(left<n&&a[left]>a[largest]){
            largest = left;
        }
        if(right<n&&a[right]>a[largest]){
            largest = right;
        }
        if(largest!=i){
            swap(a[i],a[largest]);
            Maxheapify(a,n,largest);
        }
    }

    void buildheap(int a[], int n ){
        for(int i = n/2; i >= 0; i--){
            Maxheapify(a,n,i);
        }
    }

    

    void print(int a[], int n){
        for(int i = 0 ; i < n; i++){
            cout<<a[i]<<" ";
        }
            cout<<endl;
    }
int main (){
    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    cout<<"original array";
    print(a,n);
    buildheap(a,n);
    cout<<"sorted array";
    print(a,n);
    
return 0;
}