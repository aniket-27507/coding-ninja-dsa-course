#include <iostream>
using namespace std;
#include "queue using array.h"
int main(int argc, char const *argv[])
{
    queueusingarray <int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    
    q.enqueue(60);

    cout<<q.dequeue()<<endl;
    cout <<q.front()<< endl;
    cout<<q.dequeue()<< endl;

    cout<<q.getsize()<< endl;
    cout<<q.isempty()<< endl;

    return 0;
}

