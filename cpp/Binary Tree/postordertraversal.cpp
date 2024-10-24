#include<bits/stdc++.h>
using namespace std;
    class node{
public:
        int data;
        node* right;
        node*left;
        node(int value){
            data = value;
            right = NULL;
            left = NULL;
        }
    };

    void appendadd(node** root,int value){
        if(*root==nullptr){
            *root = new node(value);
            return;
        }
        if(value<(*root)->data){
            appendadd(&((*root)->left),value);
        }
        if(value > (*root)->data){
            appendadd(&((*root)->right),value);
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
    int i , n , temp;
    cin>>n;
    for(i = 0 ; i < n ; i++){
        cin>>temp;
        appendadd(&root,temp);
    }
    cout<<"Postorder traversal of the constructed tree is \n";
    postorder(root);
return 0;
}