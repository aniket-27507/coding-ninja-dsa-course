#include "tree.h"
Treenode<int>* maxdatanode(Treenode<int>* root)
{
    Treenode<int>* max = new Treenode<int>(root->data);
    for(int i = 0; i < root->children.size(); i++)
    {
        Treenode<int>* child = maxdatanode(root->children[i]) ;
        if(child->data > max->data)
        max = child;
    }
    return max;
}