// #include <iostream>
// using namespace std;

// // Hold

// void printArray(int arr[])
// {
//     cout << "Printing the array" << endl;
//     for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "printing Done" << endl;
// }

// int main()
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     int arr[10000];
//     cout << a[1] << endl;
//     cout << a[2] << endl;
//     cout << arr[10000] << endl;

//     int second[5] = {1, 2, 3, 4, 5};

//     char ch[5]={'a','b','c','r','p'};
//     cout<<ch[3]<<endl;

//     printArray(ch);

//     return 0;
// }

#include <iostream>
using namespace std;

void printMax(int arr[], int size)
{
    int base_value = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > base_value)
        {
            base_value = arr[i];
        }
    }
    cout << base_value << endl;
}

void printMin(int arr[], int size)
{
    int base_value = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < base_value)
        {
            base_value = arr[i];
        }
    }
    cout << base_value << endl;
}

int main()
{

    int arr[5] = {1, 5, 100, 11, 20};

    printMax(arr, 5);
    printMin(arr, 5);
    return 0;
}