#include <iostream>
#include <cmath>
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

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
void deleteNode(Node *head, int val)
{
    Node *prev = NULL;
    Node *curr = head;
    while (true)
    {
        if (curr->data == val)
        {
            break;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
    prev->next = curr->next;
    curr = NULL;
}

void reverseList(Node *&head)
{
    Node *prev = NULL;
    Node *forward = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}

void binaryConvertor(Node *head)
{
    Node *curr = head;
    int i = 0;
    int sum = 0;
    while (curr != NULL)
    {
        if (curr->data != 0)
        {
            sum += pow(2, i);
        }
        curr = curr->next;
        i++;
    }
    cout << sum << endl;
}

int main()
{
    Node *root = new Node(10);
    Node *head = root;
    Node *tail = root;

    // InsertAtTail(tail, 0);
    // InsertAtTail(tail, 1);
    InsertAtHead(head, 20);
    InsertAtHead(head, 30);
    // printList(head);
    // reverseList(head);
    deleteNode(head, 30);
    printList(head);

    // binaryConvertor(head);

    return 0;
}