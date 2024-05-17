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
        this->next = nullptr;
    }
};

void InsertionAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // Print newline after printing the list
}

void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void InsertAtAny(int n, Node *&head, int data)
{
    Node *temp = new Node(data);
    Node *node2 = head;
    for (int i = 1; i < n - 1; i++)
    {
        node2 = node2->next;
    }
    temp->next = node2->next;
    node2->next = temp;
}

void DeleteFirstNode(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
}

void DeleteLastNode(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    delete curr;
    prev->next = NULL;
}

void DeleteAtAny(Node *&head, int n)
{
    Node *curr = head;
    Node *prev = NULL;
    for (int i = 1; i <= n - 1; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    // InsertionAtHead(head, 30);
    // // print(head);
    InsertAtTail(tail, 30);
    // print(head);
    InsertionAtHead(head, 50);
    InsertAtTail(tail, 22);
    InsertAtAny(4, head, 21);
    DeleteAtAny(head, 4);

    print(head);

    // InsertionAtHead(head, 40);

    return 0;
}
