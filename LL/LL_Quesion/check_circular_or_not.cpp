#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free with value " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int data)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming the element present in the list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found = curr is representing element wala node
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *&tail)
{

    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = tail->next;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (temp != tail->next);
    cout << endl;
    // cout << tail->data << " ";
    // while (tail->next != temp)
    // {
    //     cout << tail->data << " ";
    //     tail = tail->next;
    // }
    // cout << endl;
}

void deleteNode(Node *&tail, int value)
{
    // empty list

    if (tail == NULL)
    {
        cout << "List is empty pls check again " << endl;
        return;
    }
    else
    {
        // non - empty
        // assuming value present in the linked list
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // If only one node
        if (curr == prev)
        {
            tail = NULL;
        }
        // If deleting tail
        else if (curr == tail)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool isCircular(Node *&head)
{
    // empty list

    if (head == NULL)
    {
        return true;
    }
    Node *temp = head->next;

    while (temp != NULL && temp != head)
    {

        temp = temp->next;
    } 
    if (temp == head)
    {
        return true;
    }
    return false;
}

int main()
{
    Node *tail = NULL;

    // empty case
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 10);
    insertNode(tail, 10, 12);
    deleteNode(tail, 10);
    print(tail);

    if (isCircular(tail))
    {
        cout << "linked list is circular in nature " << endl;
    }
    else
    {
        cout << "Not circular linked list " << endl;
    }

    return 0;
}


