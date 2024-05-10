#include <iostream>
using namespace std;

void update2(int &n)
{
    n++;
}

void update1(int n)
{
    n++;
}

int &func(int a)
{
    int num = a;
    int &ans = num;
    return ans;
}

int *fun(int n)
{
    int *ptr = &n;
    return ptr;
}

int main()
{
    // int i = 5;
    // // creating a ref variable
    // int &j = i;

    // cout << i << endl;
    // i++;
    // cout << j << endl;
    // j++;

    int n = 5;
    cout << "Before " << n << endl;
    // update1(n);
    update2(n);

    cout << "After " << n << endl;

    func(n);

    // cout << "hello" << n << endl;

    return 0;
}