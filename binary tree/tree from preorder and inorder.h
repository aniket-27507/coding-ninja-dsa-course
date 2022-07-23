#include "binarytreenode.h"
#include <iostream>
using namespace std;
 Binarytreenode<int>* buildtreehelper(int*in,int*pre,int inS,int inE,int preS,int preE)
 {
    if(inS>inE)
    return NULL;

    int rootdata=pre[preS];
    int rootIndex=-1;
    for(int i=inS;i<=inE;i++)//= is very important
    {
        if(in[i]==rootdata)
        {
            rootIndex=i;
            break;
        }
    }

    int linS=inS;
    int linE=rootIndex-1;
    int lpreS=preS+1;
    int lpreE=linE-linS+lpreS;

    int rinS=rootIndex+1;
    int rinE=inE;
    int rpreS=lpreS+1;
    int rpreE=preE;

    Binarytreenode<int>*root=new Binarytreenode<int>(rootdata);
    
    root->left=buildtreehelper(in,pre,linS,linE,rpreS,rpreE);
    root->right=buildtreehelper(in,pre,rinS,rinE,rpreS,rpreE);
    return root;


 }
 Binarytreenode<int>* buildtree(int*inorder,int*preorder,int size)
 {
    return buildtreehelper(inorder,preorder,0,size-1,0,size-1);
 
 }