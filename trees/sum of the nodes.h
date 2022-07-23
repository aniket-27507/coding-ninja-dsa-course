#include "tree.h"
int sumofnodes(Treenode<int>* root)
{
    int sum = root->data;
    for (int i = 0; i <root->children.size(); i++)
    {
        sum += sumofnodes(root->children[i]);
    }
}