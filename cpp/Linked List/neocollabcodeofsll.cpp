#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;  
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a new node at the end of the list
Node* insertNode(Node* head, int data) {
    if (head == nullptr) {
        head = createNode(data);
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = createNode(data);
    }
    return head;
}

// Function to left-shift the linked list by k nodes
Node* leftShiftLinkedList(Node* head, int k) {
    if (head == nullptr || k <= 0) {
        return head; // No shift needed if the list is empty or k is zero or negative
    }
    
    // Find the length of the linked list
    Node* temp = head;
    int length = 0;
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }
    
    // Normalize k
    k = k % length;
    if (k == 0) return head;
    
    // Find the kth node from the beginning and the (k+1)th node
    Node* kthNode = head;
    for (int i = 1; i < k; i++) {
        kthNode = kthNode->next;
    }
    
    Node* newHead = kthNode->next;
    kthNode->next = nullptr;
    
    // Find the end of the new list and link it to the old head
    temp = newHead;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head;
    
    return newHead;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int N, k;
    cin >> N;
    
    Node* head = nullptr;
    int value;
    for (int i = 0; i < N; i++) {
        cin >> value;
        head = insertNode(head, value);
    }
    
    cin >> k;
    
    head = leftShiftLinkedList(head, k);
    printList(head);
    
    return 0;
}
