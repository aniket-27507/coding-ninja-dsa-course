//update given binary tree with its corresponding mirror image .
#include "binarytreenode.h"
#include<iostream>
void mirrorbinarytree(Binarytreenode<int>*root)
{
    if(root==NULL)
    return;

    Binarytreenode<int>* temp=root->left;
    root->left=root->right;
    root->right=temp; 
    mirrorbinarytree(root->left);
    mirrorbinarytree(root->right);

}