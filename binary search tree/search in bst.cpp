#include "binarytreenode.h"
#include <iostream>
using namespace std;
bool searchinbst(Binarytreenode <int>*root,int x)
{
    if(root == NULL)
    return false;
    if (root->data>x)
    return searchinbst(root->left,x);
    if(root->data<x)
    return searchinbst(root->right,x);
}