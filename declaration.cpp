#include <iostream>
#include "node.h"

using namespace std;


class Linkedlist
{
    public:
    Node* head;
    Node* tail;

    Linkedlist(Node *head=NULL, Node *tail=NULL) {}

    bool isEmpty();
    void addToHead(string data);
    void addToTail(string data);
    void add(string data, Node *predecessor);

    void removeFromHead();
    void removeFromTail();
    void remove(string data);
    void retrieve(string data, Node*&outputNodePointer);
    bool search(string data);
    void traverse();
};

