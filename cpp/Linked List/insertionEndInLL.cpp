#include<bits/stdc++.h>
using namespace std;
    class node{
        public:
        int data;
        node* next ;
        node(int x){
            data = x;
            next = nullptr;
        }
    };

    node* insertEnd(node* head , int x){
        node* temp = new node(x);
        if(head == NULL){
            return temp;
        }
        node* curr = head ;
        while(curr->next!= nullptr){
            curr = curr-> next;
        }
        curr->next = temp;
        return head;
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
    node * head = nullptr;
    head = insertEnd(head, 6);
    head = insertEnd(head, 3);
    head = insertEnd(head, 8);
    head = insertEnd(head, 1);
    printList(head);    
return 0;
}