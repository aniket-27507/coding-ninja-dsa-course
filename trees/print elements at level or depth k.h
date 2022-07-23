#include "tree.h"
#include<iostream>
using namespace std;
void printnodesatlevelk(Treenode <int>*root,int k)
{
    if (root == NULL)
    return;
    if(k==0)
    {
        cout<< root->data;
        return;
    }
    for(int i=0;i<root->children.size();i++)
    {
        printnodesatlevelk(root->children[i],k-1);
    }
    return;

}