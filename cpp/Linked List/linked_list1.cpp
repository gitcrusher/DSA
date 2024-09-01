#include<bits/stdc++.h>
using namespace std;
    

class node{
public: 
    int data;
    node* next;
    public:
    node(int data1 , node* next1) {
        data = data1;
        next = next1;
    }

    node(int data1){
        data = data1;
        next = nullptr;
    }
};
int main (){
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    node*y = new node(arr[0],nullptr);
    cout<<y->data;
return 0;
}