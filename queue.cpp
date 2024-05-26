// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     queue<int> q;
//     q.push(10);
//     q.push(40);
//     q.push(123);
//     q.push(500);

//     int n = q.size();

//     // q.pop();
//     while (n--)
//     {
//         cout << q.front() << " ";
//         q.push(q.front());
//         q.pop();
//     }

//     cout << endl;

//     cout << q.front() << endl;

//     cout << q.back() << endl;
// }

// reversing a queue

// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;

// void reverseQueue(queue<int> &q)
// {
//     stack<int> s;
//     int size = q.size();
//     while (size--)
//     {
//         s.push(q.front());
//         q.pop();
//     }
//     while (!s.empty())
//     {
//         q.push(s.top());
//         s.pop();
//     }
// }

// int main()
// {
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);

//     int n = q.size();

//     reverseQueue(q);
//     while (n--)
//     {
//         cout << q.front() << endl;
//         q.push(q.front());
//         q.pop();
//     }

//     return 0;
// }

// reversing k elements of a queue

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseK(queue<int> &q, int n)
{
    stack<int> s;
    int size = q.size() - n;
    while (n--)
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    };
    while (size--)
    {
        q.push(q.front());
        q.pop();
    }
}

int main()
{

    queue<int> q;
    int size = q.size();
    int n = 2;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverseK(q, n);

    while (size--)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }

    return 0;
}