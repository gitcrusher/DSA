#include<bits/stdc++.h>
using namespace std;
    class node{
        public:
        int data;
        node* next;
        node(int x){    
            data = x;
            next = NULL;
        }
    };

    int search (node*head, int x){
        int pos =1;
        node* curr = head ;
        while(curr!=NULL){
            if (curr->data == x){
                return pos;
            }
            else
            {
                pos++;
                curr = curr -> next ;
            }
        }
            return -1;

    }
int main (){
    int x; 
    cout<<"Searching: ";
    cin>>x;

    node*head = new node(10);
    head->next = new node(20);
    head->next->next = new node (30);
    head->next->next->next = new node(40);
    cout<<search(head, x);
return 0;
}