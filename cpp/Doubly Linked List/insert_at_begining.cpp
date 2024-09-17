#include<bits/stdc++.h>
using namespace std;
    class node{
        public:
        int data;
        node*next;
        node* prev;
        node(int x){
            data = x;
            next = nullptr;
            prev = nullptr;
        }
    };
    class linkedlist{
        public:
        node*head;
        linkedlist(){
            head = nullptr;
        }
        void insertdeg(int x){
            node* newnode = new node (x);
            if(head == nullptr){
                head = newnode;
            }
            else{
                newnode->next = head;
                head -> prev = newnode;
                head = newnode;
            }
        }
    };
    
int main (){
    
return 0;
}