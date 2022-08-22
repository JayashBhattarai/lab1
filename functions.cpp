#include <iostream>
#include "node.h"
#include "declaration.cpp"

using namespace std;
Node* head;

bool Linkedlist::isEmpty()
{
    if(head==NULL)
    {
        return true;
    }
    else {return false;}
}

void Linkedlist::addToHead (string data)
{
    Node *newnode = new Node(data);

    if(!isEmpty())
    {
        newnode->next = head;
    }
    head = newnode;

    cout<<data<<" was added to head\n"<<endl;
}

void Linkedlist::addToTail (string data)
{
    Node *newnode = new Node (data);

    if(isEmpty())
    {
        head=newnode;
        cout<<endl<<"adding new node to head";
    }
    else
    {
        Node *temp=head;
        while(temp->next != NULL)
        {
            temp = temp->next;
            cout<<endl<<"traversing"<<endl;
        }
        temp->next = newnode;
        cout<<endl<<"adding new node to tail"<<endl;   
    }
    cout<<data<<" was added"<<endl;
}

void Linkedlist::add (string data, Node* predecessor)
{
    Node* newnode= new Node(data);
    newnode->next = predecessor->next;
    predecessor->next = newnode;

    cout<<"New node was added"<<endl;
}

void Linkedlist::removeFromHead ()
{
    Node* temp = head;
    head = temp->next;
    cout<<"Removing"<<temp->info<<" from head"<<endl;
    delete temp;
}

bool Linkedlist::search(string data)
{
    Node* temp= head;
    cout<<"Searching "<<data<<endl;

    while(temp!=NULL)
    {
        if(temp->info==data)
        {
            cout<<"Found!"<<endl;
            return true;
        }
        temp = temp->next;
    }
    cout<<"Not Found!"<<endl;
    return false;
}

void Linkedlist::retrieve (string data, Node *&outputNodePointer)
{
    if(!search(data))
    {
        return;
    }
    Node* temp=head;

    while(temp!=NULL)
    {
        if(temp->info==data)
        {
            outputNodePointer = temp;
            cout<<data<<endl<<"Address retrieved"<<endl;
            return;
        }
        temp = temp->next;
    }
}

void Linkedlist::remove (string data)
{
    Node* toDelete=NULL;
    retrieve(data, toDelete);

    if(toDelete==head)
    {
        head = toDelete->next;
        cout<<"removing"<<toDelete->info<<" from head"<<endl;
    }
    else
    {
        Node* temp = head;
        while (temp->next != toDelete)
        {
            temp=temp->next;
        }
        temp->next = toDelete->next;
    }
    cout<<"removing "<<toDelete->info<<endl;
    delete toDelete;
}

void Linkedlist::traverse()
{
    Node* temp = head;
    cout<<endl<<"LIST"<<endl;

    while(temp!=NULL)
    {
        temp->print();
        temp=temp->next;
    }
    cout<<endl;
}