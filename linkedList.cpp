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
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node data" << value << endl;
    }
};

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
};

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
    }

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *temp = head;
        Node *temp2 = head;
        int cnt = 1;
        int cnt2 = 1;
        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt++;
        }
        while (cnt2 < position)
        {
            temp2 = temp2->next;
            cnt2++;
        }

        temp->next = temp2->next;
    }
}

// how to traverse a linked list

void print(Node *&head)
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
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    cout << "1" << endl;
    print(head);

    // print(head);

    InsertAtTail(tail, 20);

    cout << "2" << endl;
    print(head);

    InsertAtTail(tail, 15);

    cout << "3" << endl;

    print(head);

    InsertAtPosition(tail, head, 3, 22);

    cout << "4" << endl;
    print(head);

    deleteNode(2, head);
    print(head);

    // InsertAtHead(head, 12);

    // print(head);

    // InsertAtHead(head, 15);
    // print(head);

    return 0;
}
