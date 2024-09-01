#include<bits/stdc++.h>
using namespace std;
    
class node {
    public:
    int data ;
    node* next ;
    node(int x){
        data = x;
        next = nullptr;
    }
};
void printlist (node* head){
    if (head == nullptr){
    return;
    }
        cout << head -> data << "  ";
        printlist(head-> next);
    }

int main (){
    node* head = new node (10);
    head -> next = new node (20);
    head-> next -> next = new node(30);
    printlist (head);
return 0;
}
