#include<bits/stdc++.h>
using namespace std;
    class node
    {

    public:
    int data;
    node* next;
    node(int x){
        data = x;
        next = nullptr;
    }
    };

    node* insertbegin(node*head,int x ){
        node* temp = new node(x);
        temp->next = head;
        return temp;
    }
    
    void printList(node* head) {
    node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
int main (){
    int n ;
    cout<<"n = ";
    cin>>n;
    node *head =   NULL;
    head= insertbegin(head, 30);
    head = insertbegin(head, n);
    n++;
    head = insertbegin(head, n);
    printList(head);
return 0;
}