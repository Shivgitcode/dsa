// question 1
// reverse a number

// #include <iostream>
// #include <vector>
// using namespace std;

// int reverseNum(int num)
// {
//     vector<int> reverse;
//     int sum = 0;
//     while (num > 0)
//     {
//         sum = sum * 10 + num % 10;
//         num = num / 10;
//     }
//     return sum;
// }

// int main()
// {
//     int num;
//     cin >> num;

//     cout << reverseNum(num) << endl;

//     return 0;
// }

// questions 2

// #include <iostream>
// #include <vector>
// using namespace std;

// int minNum(int *arr, int size)
// {

//     int min = INT_MAX;
//     int index;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//             index = i;
//         }
//     }
//     cout << "this is index" << index << " " << "this is num " << min << endl;
//     return index;
// }

// int maxNum(int *arr, int size)
// {
//     int index = minNum(arr, size);
//     int max = arr[index];
//     for (int i = index; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     cout << "this is max value " << max << endl;
//     return max;
// }

// int maxProfit(int *arr, int size)
// {
//     cout << "this is max value in max profit " << arr[maxNum(arr, size)] << "this is min value " << arr[minNum(arr, size)] << endl;
//     int profit = maxNum(arr, size) - arr[minNum(arr, size)];

//     return profit;
// }

// int main()
// {
//     int arr[6] = {7, 1, 5, 3, 6, 4};
//     cout << maxProfit(arr, 6) << endl;

//     return 0;
// }

// question 3

// #include <iostream>
// #include <vector>
// using namespace std;
// int maxSum(vector<int> arr)
// {

//     vector<int> sums;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int sum = arr[i];
//         for (int j = i + 2; j < arr.size(); j = j + 2)
//         {
//             if (j)
//                 sum = sum + arr[j];
//         }
//         sums.push_back(sum);
//     }
//     int max = INT_MIN;
//     for (int i = 0; i < sums.size(); i++)
//     {
//         if (sums[i] > max)
//         {
//             max = sums[i];
//         }
//     }
//     return max;
// }

// int main()
// {
//     vector<int> arr;
//     arr = {7, 1, 5, 3, 6, 4};
//     int size = arr.size();
//     cout << maxSum(arr) << endl;
//     ;

//     return 0;
// }

// string compression

#include <iostream>
#include <string>
using namespace std;

string compressString(string a)
{
    int index = 0;
    int size = a.length();
    string str = "";
    for (int i = 0; i < size; i++)
    {

        int count = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        // i += count;
        if (count >= 1)
        {
            str += a[i] + to_string(count);
        }
        // i += count - 1;
    }

    return str;
}

int main()
{
    string a;
    cin >> a;
    cout << compressString(a) << endl;

    return 0;
}