#include <iostream>
using namespace std;

int main()
{
    // int arr[10] = {1, 2, 4, 5, 6};

    // cout << "address of first memory block is " << arr << endl;
    // cout << "address of first memory block is " << &arr[0] << endl;
    // cout << "value of first index of array is : " << *arr << endl;
    // cout << "5th " << *(arr + 1) << endl;
    // cout << "6th " << *(&arr[2] + 1) << endl;

    // // checking
    // int *p = &arr[0];

    // cout << &arr << endl;
    // cout << &p << endl;

    int arr[10];

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}