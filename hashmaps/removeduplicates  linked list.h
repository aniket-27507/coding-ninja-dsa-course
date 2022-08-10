//question link
//https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-unsorted-linked-list_1069331?leftPanelTab=0
#include <iostream>
class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

#include <unordered_map>
using namespace std;
Node * removeDuplicates(Node * head) {
    
    // Write your code here.
    if(head==NULL || head->next==NULL)
        return head;
    unordered_map<int,bool> map;
    map[head->data]=true;
    Node* newnode= new Node(head->data);
    Node*newhead=newnode;
    Node*newtail=newnode;
    
    
    Node*current=head->next;
    for(;current!=NULL;current=current->next)
    {   
        if(map.count(current->data)>0)
        { continue;
        }
        map[current->data]=true;
        Node*nextnode=new Node(current->data);
        newtail->next=nextnode;
        newtail=nextnode;
       
        
    }
    
    return newhead;
}