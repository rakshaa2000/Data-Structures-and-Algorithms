#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode *left, *right;
    TreeNode(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
};

void preOrder(TreeNode *root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() 
{ 
    struct TreeNode *root = new TreeNode(1); 
    root->left = new TreeNode(2); 
    root->right = new TreeNode(3); 
    root->left->left = new TreeNode(4); 
    root->left->right = new TreeNode(5);  
  
    cout << "\nPreorder traversal of binary tree is \n"; 
    preorder(root); 
  
    return 0; 
} 