//diameter of a tree is the longest distance between any two nodes.
// distance should ne maximum dustance.
#include "binarytreenode.h"
#include "input_levelwise.h"
#include <cstddef>
#include<iostream>
using namespace std;
pair<int,int> heightdiameter(Binarytreenode<int>*root)
{
    if(root==NULL) 
    {
        pair<int,int>p;
        p.first =0;
        p.second =0;
        return p;
    }

    pair<int,int>leftans=heightdiameter(root->left);
    pair<int,int>rightans=heightdiameter(root->right);

    int ld=leftans.second;
    int lh=leftans.first;
    int rh=rightans.first;
    int rd=rightans.second;

    int height=1+max(lh,rh);
    int diameter = max(lh+rh,max(rd,ld));

    pair<int,int>p;
    p.first=height;
    p.second=diameter;
    return p;
}
int main(int argc, char const *argv[])
{
    Binarytreenode<int >* root=takeinput_levelwise();
    pair<int,int>ans=heightdiameter(root);
    cout<<"height :"<<ans.first<<endl;
    cout<<"diameter :"<<ans.second<<endl;
    return 0;
}
