// https://codeforces.com/problemset/problem/1676/A

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string arr;
    for (int i = 0; i < t; i++)
    {
        cin >> arr;
        if ((arr[0] + arr[1] + arr[2]) == (arr[3] + arr[4] + arr[5]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    //     for(int j = 0; j < t; j++)
    //     {
    //         if(arr[])
    //     }
}