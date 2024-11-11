#include<bits/stdc++.h>
using namespace std;
    void fwarshall(int arr[][4]){
        int i , j , k ;
        for (k= 0 ; k < 4 ; k++){
            for(i=0 ; i < 4 ; i++){
                for (j=0 ; j < 4 ; j++){
                    if(i!=j){
                        if ((arr[i][j]>arr[j][k]+arr[k][j])||(arr[i][j]==0))
                        {
                            arr[i][j]= arr[i][k]+arr[k][j];
                        }
                    }
                }
            }
        }
        for(j = 0 ; j < 4 ; j++){
            cout<<arr[i][j];
        }
    }
int main (){
    int arr[4][4];
    cout<<"enter values";
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
        cin>>arr[i][j];
        }
        fwarshall(arr);
        cout<<endl;
    }
return 0;
}