#include<bits/stdc++.h>
using namespace std;
    class node{
        public:
        int data;
        node* next;
        node(int x){
            data = x;
            next = nullptr;
        }
    };

    void insertatbeg(node* &head,int value){
        node* newnode= new node(value);
        if(head == nullptr){
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    }

    void print(node* head){
        node* curr = head;
        while(curr!= nullptr){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<endl;
    }

int main (){
    node* head = nullptr;
    int n ,value,no;
    cout<<"insert length"<<endl;
    cin>>n;
    cout<<"insert no"<<endl;
    cin>>no;
    for(int i = 0 ; i< n ; ++i){
        cin>>value;
        insertatbeg(head,value);
    }
    insertatbeg(head,no);
    cout<<"added list: ";
    print(head);

return 0;
}