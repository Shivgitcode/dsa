// #include <iostream>
// using namespace std;

// void func(int n)
// {
//     if (n == 0)
//     {
//         cout << "Happy Birthday" << endl;
//         return;
//     }
//     cout << n << " days left for birthday" << endl;
//     func(n - 1);
// }

// int main()
// {
//     func(3);
//     return 0;
// }

#include <iostream>

using namespace std;

void printN(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }
    cout << n << " ";
    cout << endl;
    printN(n - 1);
}

int sumN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int sum = 0;
    sum = n + sumN(n - 1);

    return sum;
}

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int mul;
    mul = x * power(x, n - 1);
    return mul;
}

int main()
{
    // printN(10);
    // cout << sumN(10) << endl;
    cout << power(2, 0) << endl;
}