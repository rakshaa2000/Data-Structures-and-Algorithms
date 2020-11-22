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

void postOrder(TreeNode *root){
    if(root==NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main() 
{ 
    struct TreeNode *root = new TreeNode(1); 
    root->left = new TreeNode(2); 
    root->right = new TreeNode(3); 
    root->left->left = new TreeNode(4); 
    root->left->right = new TreeNode(5);  
  
    cout << "\nPostorder traversal of binary tree is \n"; 
    postorder(root); 
  
    return 0; 
} 