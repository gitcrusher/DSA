#include<bits/stdc++.h>
#include<stack>
using namespace std;
    
int main (){
    stack<int>mystack;
    int n, value ;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>value;
        mystack.push(value);
    }
    if(!mystack.empty()){
    cout<<"top element is"<<" ";
        cout<<mystack.top()<<endl;
    }else{
        cout<<"stack is input";
    }
    
    cout<<endl;

    if(mystack.empty()){
    cout<<"stack is empty";
    }
return 0;
}