//although this recursive method of taking input and printing tree is not suitable for user.
//we will see a better way of input and output later on.
#include "binarytreenode.h"
#include<iostream>
using namespace std;    
Binarytreenode<int>*takeinput_recursive()
{
    int rootdata;
    cout<<"Enter data"<<endl;
    cin>>rootdata;
    //here we will ask user to enter -1 as termination factor.
    if(rootdata==-1)
    return;
    Binarytreenode<int>*root=new Binarytreenode<int>(rootdata);
    Binarytreenode<int>*leftchild=takeinput_recursive();
    Binarytreenode<int>*rightchild=takeinput_recursive();
    root->left=leftchild;
    root->right=rightchild;
    return root;
}

void print_recursive(Binarytreenode<int>* root)
{
    if(root==NULL)
     return;
    cout<<root->data<<":";
    if(root->left!=NULL)
     cout<<"L"<<root->left->data;
    if(root->right!=NULL)
    cout<<"R"<<root->right->data;
    cout<<endl;
    print_recursive(root->left);
    print_recursive(root->right);
}