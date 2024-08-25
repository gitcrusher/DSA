#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fun(int arr[], int n){
    for(int i = 0; i<n; i++){
        int temp = arr[i];
        int temp2 = arr[i+1];
        if (temp>temp2){
            cout<<i;
        }
    }

}

int main (){
    int n;
    cout<<"Enter the length: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<fun(arr,n);
    return 0;
}
