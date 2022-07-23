
#include "input output.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	Treenode<int>* root = takeinput_levelwise();
	printTree(root);/* code */
	return 0;
}

	/*TreeNode<int>* root = new TreeNode<int>(1);
	TreeNode<int>* node1 = new TreeNode<int>(2);
	TreeNode<int>* node2 = new TreeNode<int>(3);
	root->children.push_back(node1);
	root->children.push_back(node2);
	*/
	
	// TODO delete the tree
