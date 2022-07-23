//this input output is IN THE FORM of recursion.
//somebody who does not understand recursion will not be able to give input easily.
#include "tree.h"
#include <iostream>
using namespace std;
Treenode <int> * takeinput()
{
    int rootdata;
    cout << "enter the data "<<endl;
    cin >> rootdata;
    Treenode<int> *root = new Treenode<int>(rootdata);
    int n ;
    cout<< "enter the no of children of "<<rootdata<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        Treenode<int> *child = takeinput();
        root->children.push_back(child);
    }
    return root;
}
void printTree(Treenode<int>* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << ":";
	for (int i = 0; i < root->children.size(); i++) {
		cout << root->children[i]->data << ",";
	}
	cout << endl;
	for (int i = 0; i < root->children.size() ; i++) {
		printTree(root->children[i]);
	}
}


 //since the input method depth wise using recursion is complecated to imple =ment for a user not 
 //recursion.
 //hence we  use level-wise input technique where we use queue
#include <queue>
Treenode <int>* takeinput_levelwise()
{
    int rootdata;
    cout<< "enter root data"<<endl;
    cin>>rootdata;
    Treenode <int>* root = new Treenode<int>(rootdata);
    queue<Treenode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        Treenode<int>* front = pendingnodes.front();
        pendingnodes.pop();
        int numchild;
        cout<< "Enter the number of children of  "<< front->data<<endl;
        cin>>numchild;
        for(int i=1;i<=numchild;i++)
        {
             int childdata;
             cout<<"Enter the"<<i<<"th child of "<< front->data<<endl;
             cin>>childdata;
             Treenode<int>* child = new Treenode<int>(childdata);
             front->children.push_back(child);
             pendingnodes.push(child);
        }

    }
    return root;
}
// level wise printing of a tree.
void printlevelwise(Treenode<int>* root)
{
    queue<Treenode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(!pendingnodes.empty())
    {
        Treenode<int>* front = pendingnodes.front();
        pendingnodes.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->children.size();i++)
        {
            Treenode<int>* child = front->children[i];
            cout<<child->data;
            if(i!=front->children.size()-1)
            {
                cout<<", ";
            }
            pendingnodes.push(child);
        }
        cout<<endl;
    }
}
