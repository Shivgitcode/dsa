#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int(size);
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
    {
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
            return arr[top] else
            {
                cout << "Stack is Empty" << endl;
                return -1;
            }
    }
    bool isEmpty()
    {
    }
};

int main()
{
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    // pop
    s.pop();
    cout << "Printing top element " << s.top() << endl;

    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    cout << "size of stack: " << s.size() << endl;

    return 0;
}