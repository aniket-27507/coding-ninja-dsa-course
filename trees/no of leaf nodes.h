#include "tree.h"
int getleafnodecount(Treenode<int>*root)
{
    if (root == NULL)   
    return 0;
    int leaf_nodes =0;
    if(root->children.size()==0)
    return 1;
    for (int i=0; i<root->children.size(); i++)
    {
        leaf_nodes += getleafnodecount(root->children[i]);
    }
    return leaf_nodes;
}