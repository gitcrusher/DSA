#include<bits/stdc++.h>
using namespace std;
    class node{
        public:
        int data;
        node* left;
        node* right;
        node(int value){
            data = value;
            left = nullptr;
            right = nullptr;
        }
    };

    void add(node**root,int value){
        if(*root == nullptr){
            *root= new node(value);
            return;
        }
        if(value<(*root)->data){
            add(&(*root)->left,value);
        }
        if(value>(*root)->data){
            add(&(*root)->right,value);
        }
    }

    void preordertraversal(node* root){
        if(root!=nullptr){
            cout<<root->data<<" ";
            preordertraversal(root->left);
            preordertraversal(root->right);
        }
    }
int main (){
    node* root = nullptr;
    int n , i , temp;
    cin>>n;
    for(i= 0 ; i<n;i++){
        cin>>temp;
        add(&root, temp);
    }
    cout<<"Preorder traversal: ";
    preordertraversal(root);
    
return 0;
}