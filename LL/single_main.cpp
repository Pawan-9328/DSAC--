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
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free with data " << value << endl;
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

void insertAtMiddle(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertionHead(head, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at least position
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // creating a new node
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    // deleting first node

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

        // If only one node and it's tail
        if (temp == tail)
        {
            tail = NULL;
        }
        // free memory
        temp->next = NULL;
        // delete temp;
        delete temp;
    }
    else
    {
        // deleting middle and last node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
// ✅ Fix here: update tail if last node is deleted
        if (curr == tail)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
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
    cout << tail->data << endl;
    insertAtMiddle(head, tail, 2, 11);
    printHead(head);
    cout << head->data << endl;
    cout << tail->data << endl;
    cout << endl;
    printHead(head);
    deleteNode(4, head, tail);
    printHead(head);
    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    return 0;
}
