#include "binarytreenode.h"
#include <iostream>
using namespace std;
//preorder traversal.
void preorder(Binarytreenode <int>*root)
{
    if (root == NULL)
    return;
    cout <<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

//postorder traversal.
void postorder(Binarytreenode <int>*root)
{
    if (root == NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<< root->data<<" ";

}

//inorder traversal.
void inorder(Binarytreenode <int>*root)
{
    if (root == NULL)
    return;
    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);
}