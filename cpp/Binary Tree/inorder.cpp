#include<iostream>
using namespace std;

struct Node
{
int data;
Node* left;
Node* right;
};
Node* tree(int data)
{
Node* newnode = new Node;
newnode->data = data;
newnode->left = nullptr;
newnode->right = nullptr;
return newnode;
}

void inorder(Node* root)
{
if (root == nullptr)
{
return;
}

inorder(root->left);
cout << root->data << " ";
inorder(root->right);
}


Node* Tree()
{
int data;
cout << "Enter data for node: ";
cin >> data;

if (data == -1)
{
return nullptr;
}

Node* root = tree(data);


cout << "Enter left child of " << data << ": ";
root->left = Tree();

cout << "Enter right child of " << data << ": ";
root->right = Tree();

return root;
}

int main()
{
Node* root = Tree();

inorder(root);

return 0;
}