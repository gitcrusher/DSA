#include<bits/stdc++.h>
using namespace std;
    int binary(int arr[], int n , int key){
        int start = 0 ; 
        int end = n-1;
        int mid = start+(end-start)/2;
        while(start<=end){
            if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
        }
        return -1;
    }
int main (){
    int n , key;
    cout<<"Enter length: ";
    cin>>n;
    cout<<"Enter key: ";
    cin>>key;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    int value = binary(arr,n,key);
    cout<<value;
return 0;
}