#include <iostream>
#include <vector>
using namespace std;

int uglyNumber(int n)
{
    vector<int> ans;

    int num = 1;

    for (int i = 1; ans.size() < n; i++)
    {
        if (num == 1)
        {
            ans.push_back(i);
        }
        else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
        {
            ans.push_back(num);
            num++;
        }
        else
        {
            num++;
        }
    }

    return ans[ans.size() - 1];
}

int main()
{
    int num;
    cin >> num;
    cout << uglyNumber(num) << endl;

    return 0;
}