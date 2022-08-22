#include <iostream>
#include "node.h"
//#include "functions.cpp"
#include "declaration.cpp"

using namespace std;

int main()
{
    Linkedlist l1;
    Node* ptr;

    if(l1.isEmpty())
    {
        cout<<"The list is empty!"<<endl;
    }
    else
    {
        cout<<"The list is not empty!"<<endl;
    }

    l1.addToHead("5");
    l1.retrieve("5", ptr);
    l1.add("10", ptr);
    l1.addToTail("abc");
    l1.addToTail("255");
    l1.traverse();
    l1.removeFromHead();
    l1.remove("abc");
    l1.traverse();
    
    
    
}