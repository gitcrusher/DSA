#include<bits/stdc++.h>
using namespace std;
    struct Node{
        int data ; 
        Node* next ;
        Node(int x ){
            data = x; 
            next = nullptr;
        }
    };

    Node* Convert (vector<int>&arr){
        Node* head = new Node(arr[0]);
        Node* mover  = new Node(arr[1]);
        for (int i=0; i<arr.size();i++){
            Node * temp = new Node (arr[i]);
            mover -> next = head;
            mover = temp ;
        }
    };
int main (){
    vector <int>arr= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    Node* y = new Node(arr[0]);
    cout<<y -> data;
return 0;
}