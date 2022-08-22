#include <iostream>

using namespace std;

#ifndef NODE_H
#define NODE_H

class Node
{
    public:
    string info;
    Node* next;

    Node(string info)
    {
        this->info=info;
        this->next=NULL;
    }

    void print()
    {
        cout<<"Info "<<info<<endl;
    }
};

#endif