#include<bits/stdc++.h>
using namespace std;
    
int midsquare(int key , int m){
    long square = (long)key*key;
    int middle = (square/100)%100;
    return middle%m;
}


int main (){
    int keys [] = {123,456,789};
    int m = 10;
    cout<<" key values"<<endl;
    for(int key: keys){
        long square = long(key*key);
        int hashvalue = midsquare(key,m);
        cout<<key<<" "<<hashvalue<<endl;
    }
return 0;
}