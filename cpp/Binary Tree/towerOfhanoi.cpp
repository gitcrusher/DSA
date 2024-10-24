#include<bits/stdc++.h>
using namespace std;
    void towerofhanoi(int n , char  from_rod, char to_rod, char aux_rod){
        int count = 0;
        if(n==0) return;
        towerofhanoi(n-1,from_rod,aux_rod,to_rod);
        cout<<"move disk "<<n<<" from rod "<< from_rod<<" to rod "<< to_rod<<endl;
        towerofhanoi(n-1,aux_rod,to_rod,from_rod);  // recursive call to solve the remaining disks.
    }
int main (){
    int n ;
    char a, b,c;
    cin>>n>>a>>b>>c;
    towerofhanoi(n,a,b,c);
return 0;
}