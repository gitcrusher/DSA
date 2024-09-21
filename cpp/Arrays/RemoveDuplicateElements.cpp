    #include<bits/stdc++.h>
    using namespace std;
        
    int main (){
        int n ;
        cout<<"Enter the size of array: ";
        cin>>n;
        int arr[n];
        cout<<"Enter the elements of array: ";
        for(int i = 0 ; i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int x = 0;
        for(int i = 1 ; i < n ; i++){
            if(arr[i]!=arr[x]){
                x=x+1;
                arr[x]=arr[i];

            }
        }

        for(int i = 0   ; i <= x ; i++){
            cout<<arr[i]<<' ';
        }
    return 0;
    }