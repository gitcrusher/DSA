#include<bits/stdc++.h>
using namespace std;
    
struct node {
    int data ;
    node* next ;
    node(int x){    
        data = x;
        next = nullptr;
    }
};
void printlist (node* head){
    node* curr = head ; 
    while (curr != nullptr){
        cout << curr -> data << "  ";
        curr = curr -> next;
    }
}
int main (){
    node* head = new node (10);
    head -> next = new node (20);
    head-> next -> next = new node(30);
    printlist (head);
return 0;
}













// #include<bits/stdc++.h>
// using namespace std;
    

// class node{
// public: 
//     int data;
//     node* next;
//     public:
//     node(int data1 , node* next1) {
//         data = data1;
//         next = next1;
//     }

//     node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };

// node* convertArr2LL(vector<int>&arr){
//     node* head = new node(arr[0]);
//     node* mover = head;
//     for (int i = 1; i < arr.size();i++) {
//         node* temp = new node(arr[i]);
//         mover->next = temp; 
//         mover = temp;
//     }
//     return head;  // return head of the linked list.  // return head;  // return head of the linked list.  // return head;  // return head of the linked list.  // return head;  // return head of the linked list.  // return head;  // return head of the linked list.  // return head;  // return head of the linked list.  // return head;  // return head of the linked list.  // return head
// }

// int main (){
//     vector<int>arr={1,2,3,4,5,6,7,8,9};
//     node* head  = convertArr2LL(arr);
//     cout<<head-> data;
// return 0;
// }