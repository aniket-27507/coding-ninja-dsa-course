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

void printlevelwise(BinaryTreeNode<int>* root)
{
    if (root==NULL)
    return;

    queue<BinaryTreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    pendingnodes.push(NULL);
    while (!pendingnodes.empty())
    {
        BinaryTreeNode<int>* front = pendingnodes.front();
        pendingnodes.pop();

        if(front==NULL)
        {
            if(pendingnodes.size()==0)
            break;
            cout<<endl;
            pendingnodes.push(NULL);
             
        }
        else
        {
            cout<<front->data<<" ";
            
            if(front->left)
            pendingnodes.push(front->left);
            if(front->right)
            pendingnodes.push(front->right);
        }
    }
}
//8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
int main() {
    BinaryTreeNode<int>* root = takeInput();
    printlevelwise(root);
}