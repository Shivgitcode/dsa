#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void InsertAtHead(Node *&head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}

void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void InsertAtTail(Node *tail, int val)
{
    Node *temp = new Node(val);
    tail->next = temp;
    tail = temp;
}

void InsertAtAny(Node *tail, int val, int position)
{
    Node *temp = new Node(val);
    Node *curr = tail;
    int i = 1;
    while (i < position - 1)
    {
        curr = curr->next;
        i++;
    }
    temp->next = curr->next;
    curr->next = temp;
}

void DeleteAtAny(Node *head, int position)
{
    Node *prev = NULL;
    Node *curr = head;
    int i = 0;
    while (i < position - 1)
    {
        prev = curr;
        curr = curr->next;
        i++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete (curr);
}

int main()
{
    Node *head = new Node(10);
    InsertAtHead(head, 20);
    InsertAtHead(head, 40);

    InsertAtAny(head, 50, 2);

    DeleteAtAny(head, 2);

    printList(head);

    return 0;
}