#include<iostream>
template <typename T> 


class Binarytreenode
{
    public:
    T data;
    Binarytreenode * left;
    Binarytreenode * right;

    Binarytreenode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~Binarytreenode() 
    {
        delete left;
        delete right;
    }
};