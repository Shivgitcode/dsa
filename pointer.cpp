#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    int *ptr = &num;

    // cout << num << endl;

    cout << *ptr << endl;
    cout << &num << endl;
    cout << ptr << endl;

    cout << sizeof(ptr) << endl;
    cout << sizeof(num) << endl;

    // address of Operator-&

    int i = 5;
    // int *p=&i;

    int *p = 0;

    p = &i;

    // copying a pointer

    int *q = p;
    cout << p << "-" << q << endl;
    cout << *p << "-" << *q << endl;

    // cout << p << endl;
    // cout << *p << endl;
    // cout << &i << endl;

    (*p)++;
    cout << "this is value " << *p << endl;
    cout << "this is value2 " << i << endl;

    // cout << &num << endl;

    return 0;
}