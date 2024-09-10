#include<bits/stdc++.h>
using namespace std;
    class node {
        public:
        int data ;
        node*next;
        node(int x){
            data = x;
            next = nullptr;
        }
    };

    node * convert(vector<int >&arr){
        node*head= new node(arr[0]);
        node* mover = head;
        for(int i = 1 ; i < arr.size();i++){
            node* temp = new node(arr[i]);
            mover->next = temp;
            mover = temp ;
        }
        return head;
    }

int search (node* head,int val){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        // if(temp->data == val){
        //     return 1;
        // }
        temp = temp->next;
    }
    return 0;
}

int main (){
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    node* head = convert(arr);
    cout<<search(head,5);
return 0;
}