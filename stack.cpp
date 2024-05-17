// #include <iostream>
// #include <stack>
// using namespace std;

// void reverseArr(int arr[], int size)
// {
//     stack<int> st1;
//     int i = 0;
//     for (int i = 0; i < size; i++)
//     {
//         st1.push(arr[i]);
//     }

//     while (!st1.empty())
//     {
//         arr[i] = st1.top();

//         st1.pop();
//         i++;
//     }
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     reverseArr(arr, 5);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<int> st;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int i = 1;

//         for (int i = 0; i < 3; i++)
//         {
//             int num;
//             cin >> num;
//             st.push(num);
//         }

//         while (!st.empty())
//         {
//             if (i == 1)
//             {
//                 cout << "something: " << st.top() << " ";
//                 st.pop();
//             }
//             else if (i == 2)
//             {
//                 cout << "something2: " << st.top() << " ";
//                 st.pop();
//             }
//             else if (i == 3)
//             {
//                 cout << "something3: " << st.top() << " ";
//                 st.pop();
//             }
//             i++;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// insert at bottom

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void insertAtBottom(stack<int> &st, int n)
{
    vector<int> arr;
    while (!st.empty())
    {
        arr.push_back(st.top());
        st.pop();
    }
    st.push(n);
    for (int i = arr.size() - 1; i != -1; i--)
    {
        st.push(arr[i]);
    }
}

void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    printStack(st);

    insertAtBottom(st, 5);

    printStack(st);

    return 0;
}