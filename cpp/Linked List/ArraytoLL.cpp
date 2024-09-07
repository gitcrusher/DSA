#include<bits/stdc++.h>
using namespace std;
    
    class Node{
        public:
        int data ;
        Node* next;
        Node(int data1){
            data = data1;
            next = nullptr;
        }
    };
Node* convert(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 0 ; i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp ;
        mover = temp;
    }
    return head;
}
int main (){
    vector<int> arr = {2,3,4,5};
    Node* head = convert(arr);
    cout<<head->data;
return 0;
}