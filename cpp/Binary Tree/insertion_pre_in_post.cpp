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

    void add(node** root, int value){
        if(*root==nullptr){
            *root = new node(value);
            return;
        }
        if(value<(*root)->data){
            add(&((*root)->left),value);
        }
        if(value>(*root)->data){
            add(&((*root)->right),value);
        }
    }

    void preorder(node* root){
        if(root!=nullptr){
            cout<<root->data<<" ";
            preorder(root->left);
            preorder(root->right);
        }
    }


    void inorder(node* root){
        if(root!=nullptr){
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }
    }


    void postorder(node* root){
        if(root!=nullptr){
            postorder(root->left);
            postorder(root->right);
            cout<<root->data<<" ";
        }
    }
int main (){
    node* root = nullptr;
    int n, i, temp;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    cout<<"Enter the values: ";
    for(i=0;i<n;i++){
        cin>>temp;
        add(&root, temp);
    }
    cout<<"Preorder traversal: ";
    preorder(root);
    cout<<"\nInorder traversal: ";
    inorder(root);
    cout<<"\nPostorder traversal: ";
    postorder(root);
    
return 0;
}