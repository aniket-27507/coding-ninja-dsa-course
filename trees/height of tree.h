#include "tree.h"
#include <bits/stdc++.h>
int getheight(Treenode <int>* root)
{
    int height = 1;
    if(root->children.size() == 0)
    return height;
     
    int arr[root->children.size()];
    for (int i = 0; i < root->children.size(); i++)
    {
        arr[i]=getheight(root->children[i]);
    }
    sort(arr,arr+root->children.size(),greater<int>());
    height += arr[0];
    return height;

}