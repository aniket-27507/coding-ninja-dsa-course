#include "tree.h"
#include <iostream>
using namespace std;
void preorder(Treenode<int>*root)
{
    if (root == NULL)
    return;
    cout<<root->data<<" ";
    for(int i=0; i<root->children.size(); i++) 
    {
        preorder(root->children[i]);
    }
}