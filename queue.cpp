#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // create a queue
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout << "printing first element of queue: " << q.front() << endl;
    q.pop();
    cout << "printing first element fo queue: " << q.front() << endl;
    cout << "printing size of queue : " << q.size() << endl;

    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }

    return 0;
}