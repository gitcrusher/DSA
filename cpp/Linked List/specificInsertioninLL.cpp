#include<bits/stdc++.h>
using namespace std;
    
    class node {
        public:
        int data;
        node* next;
        node(int x){
            data = x;
            next = NULL;
        }
    };
    node* specifiInsert(node* head , int pos, int data){
        node*temp =  new node(data);
        if (pos ==1){
            temp->next = head;
            return temp;
        }
        node* current = head;
        for(int i = 0 ; i < pos -2 &&current!=NULL ; i++){
            current = current->next;
        }
        if(current == NULL){
            return head;
        }

        temp->next = current->next;
        current->next = temp;
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
    int n; // Number of nodes to insert
    cout << "Enter the number of nodes: ";
    cin >> n;
    node* head = NULL; // Initialize head as NULL
    for (int i = 0; i < n; i++) {
        int pos, data;
        cout << "Enter position and data for node " << i + 1 << ": ";
        cin >> pos >> data;

        // Insert node at the specified position
        head = specifiInsert(head, pos, data);
    }

    // Print the final linked list
    cout << "The final linked list is: ";
    printList(head);

    return 0;
}