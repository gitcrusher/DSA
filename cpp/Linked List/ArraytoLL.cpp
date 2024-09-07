#include<bits/stdc++.h>
using namespace std;
    
    class Node{
        public:
        int data ;
        Node* next;
        Node(int data1, Node*next1){
            data = data1;
            next = next1;
        }
    };

int main (){
    int n;
    cout<<"No of  element: ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i ++){
        cin>>arr[i];
    }
    Node*y = new Node(arr[0], nullptr);
    cout<<y->data;

return 0;
}