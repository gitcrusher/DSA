#include<bits/stdc++.h>
using namespace std;
    class node{
        public:
        int data ;
        node* next;\
        node(int x){
            data = x;  
            next= nullptr;
        }
    };

node * convert(vector<int>&arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for (int i = 1 ; i < arr.size() ; i++){
        node* temp = new node (arr[i]);
        mover -> next = temp ;
        mover = temp ;
    }
    return head;
}

int main (){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    node* y = convert(arr);
    node* temp = y ; 
    while(temp){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    
return 0;
}