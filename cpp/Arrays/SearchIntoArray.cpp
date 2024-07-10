#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Search(int arr[], int n , int x){
    for (int i=0;i<n;i++){
        if (arr[i]==x){
            return i;
        }
    }
        return -1;
}
int main (){
    int x,n;
    cout<<"Enter the no you want to find: ";
    cin>>x;
    cout<<"Enter the Size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<Search(arr,n ,x);
    return 0;
}