#include"tree.h"
int numofnodes(Treenode<int>* root)
{
    int num = 0;
    for (int i = 0; i < root->children.size(); i++) 
    {
        num += numofnodes(root->children[i]);
    }
    return num;
}