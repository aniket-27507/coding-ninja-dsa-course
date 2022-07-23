//detail explanation of the question is given in the notebook.
//check it out while revising.

#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;


BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}
#include <stack>
void zigZagOrder(BinaryTreeNode<int> *root)
{
    if(root==NULL)
    return;
    stack<BinaryTreeNode<int>*>stRtoL;
    stack<BinaryTreeNode<int>*>stLtoR;
    stRtoL.push(root);
    while(!(stRtoL.empty() &&stLtoR.empty()))
    {
        while(!stRtoL.empty())
        {
            BinaryTreeNode<int>*front=stRtoL.top();
            stRtoL.pop();
            cout<<front->data<<" ";
            if(front->left)
            stLtoR.push(front->left);
            if(front->right)
            stLtoR.push(front->right);
        }
        cout<<endl;
        while(!stLtoR.empty())
        {
            BinaryTreeNode<int>*top=stLtoR.top();
            stLtoR.pop();
            cout<<top->data<<" ";
            if(top->right)
            stRtoL.push(top->right);
            if(top->left)
            stRtoL.push(top->left);
        }
        cout<<endl;
    }   

    

}
//5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
int main() {
    BinaryTreeNode<int>* root = takeInput();
    zigZagOrder(root);
}