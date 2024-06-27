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
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtMiddle(Node *head, int data, int position)
{
    int i = 0;
    Node *temp = new Node(data);
    Node *curr = head;
    while (i < position - 2)
    {
        curr = curr->next;
        i++;
    }
    temp->next = curr->next;
    curr->next = temp;
}

void deleteNode(Node *&head, int position)
{
    Node *curr = head;
    Node *prev = NULL;
    int i = 0;
    if (position == 1)
    {
        head = curr->next;
        curr->next = NULL;
    }
    else
    {
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
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp = tail;
}

void printList(Node *&head)
{
    // cout << head->data << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void reverseLinkedList(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    head = prev;

    // cout << head->data << endl;
}

int main()
{
    Node *root = new Node(10);
    Node *head = root;
    // cout << head->data << endl;
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    printList(head);

    reverseLinkedList(head);
    cout << endl;

    printList(head);

    return 0;
}