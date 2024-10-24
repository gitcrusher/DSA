#include<bits/stdc++.h>
using namespace std;
    struct node{
        int data;
        struct node* right;
        struct node* left;

        node(int value){
            data = value;
            right = NULL;
            left = NULL;
        }
    };

    void addnode(node** root ,int value){
        if(*root ==NULL) {
         *root = new node(value);
        return;
        }
        if (value <(*root)->data){
            addnode(&(*root)->left,value);
        }else if(value>=(*root)->data){
            addnode(&(*root)->right,value);
        }
    }

    void inorderTraversal(node* root){
        if(root!=nullptr){
            inorderTraversal(root->left);
            cout<<root->data<<" ";
            inorderTraversal(root->right);
        }
    }

int main (){
    struct node* root = NULL;
    int n ,  i , temp;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>temp;
        addnode(&root, temp);
    }  

    cout<<"inorder traversal: ";
    inorderTraversal(root);
    cout <<endl;
return 0;
}