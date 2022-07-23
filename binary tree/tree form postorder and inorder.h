#include "binarytreenode.h"
#include <iostream>
using namespace std;
Binarytreenode<int>* buildtreehelper(int*pos,int*in,int poS,int poE,int inS,int inE)
{
    if(inS>inE)
    return NULL;

    int rootdata=pos[poE];
    int rootIndex=-1;
    for(int i=inS;i<=inE;i++)//=is very important
    {
        if(in[i]==rootdata)
        {
            rootIndex=i;
            break;
        }
    }
    
    int linS=inS;
    int linE=rootIndex-1;
    int lpoS=poS;
    int lpoE=linE-linS+lpoS;

    int rinS=rootIndex+1;
    int rinE=inE;
    int rpoS=lpoE+1;
    int rpoE=poE-1;
     
    Binarytreenode<int>*root = new Binarytreenode<int>(rootdata);
    
    root->left = buildtreehelper(pos,in,lpoS,lpoE,linS,linE);
    root->right = buildtreehelper(pos,in,rpoS,rpoE,rinS,rinE);
    return root;
}
Binarytreenode<int>* buildtree(int*postorder,int postlength,int*inorder,int inlength)
{
    return buildtreehelper(postorder,inorder,0,postlength-1,0,inlength-1);
}