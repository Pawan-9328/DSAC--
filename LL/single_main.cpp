#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertionHead(Node *&head, int data)
{
    // new node create
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void printHead(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(12);
    Node *tail = node1;
    cout << node1->data << endl;
    cout << node1->next << endl;

    // head pointed to node1

    Node *head = node1;
    printHead(head);

    insertionHead(head, 10);
    printHead(head);
    insertAtTail(tail, 15);
    printHead(head);

    return 0;
}
