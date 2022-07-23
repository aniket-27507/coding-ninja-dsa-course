
#include<iostream>
#include<queue>
using namespace std;  
Binarytreenode<int>* takeinput_levelwise()
{
    int rootdata;
    cout<<"Enter the root data"<<endl;
    cin>>rootdata;
    if(rootdata==-1)
    return NULL;
    Binarytreenode<int>* root=new Binarytreenode<int>(rootdata);

    queue<Binarytreenode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        Binarytreenode<int>* front=pendingnodes.front();
        pendingnodes.pop();
        cout<<"Enter the left child of "<< front->data<<endl;
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata!=-1)
        {
            Binarytreenode <int>* leftchild=new Binarytreenode <int>(leftchilddata);
            front->left=leftchild;
            pendingnodes.push(leftchild);
        }
        cout<<"Enter the right child of "<< front->data<<endl;
        int rightchilddata;
        cin>>rightchilddata;
        if(rightchilddata!=-1)
        {
            Binarytreenode<int>* rightchild=new Binarytreenode<int>(rightchilddata);
            front->right=rightchild;
            pendingnodes.push(rightchild);
        }
    }
    return root;
}