#include<bits/stdc++.h>
using namespace std;
    int binarysearch(int arr[],int size , int key){
    int start = 0 ; 
    int end = size -1 ;
    int mid = start+(end - start)/2;
    while (start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start+(end - start)/2;
    }
    return -1;
}
int main (){
    int n,k;
    cin>>n;
    cin>>k;
    
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    int read = binarysearch(a,n,k);
    cout<<"answer: "<<read<<endl;
return 0;
}