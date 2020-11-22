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

void mirror(TreeNode *root){
    if (node == NULL)  
        return;  
    else
    { 
        struct TreeNode* temp; 
          
        /* do the subtrees */
        mirror(node->left); 
        mirror(node->right); 
      
        /* swap the pointers in this node */
        temp     = node->left; 
        node->left = node->right; 
        node->right = temp; 
    
}

void inOrder(TreeNode *root){
    if(root==NULL)
        return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main() 
{ 
    struct TreeNode *root = new TreeNode(1); 
    root->left = new TreeNode(2); 
    root->right = new TreeNode(3); 
    root->left->left = new TreeNode(4); 
    root->left->right = new TreeNode(5);  
  
    cout << "\nMirror Tree\n"; 
    mirror(root);  
    
    cout << "\nInorder traversal of the mirror tree"
         << " is \n";  
    inOrder(root); 
    return 0; 
} 