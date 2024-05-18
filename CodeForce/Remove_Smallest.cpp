// https://codeforces.com/problemset/problem/1399/A

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int s;
        cin >> s;
        int arr[s];
        for (int j = 0; j < s; j++)
        {
            cin >> arr[j];
        }
        int count = 0;
        for (int k = 0; k < s; k++)
        {
            while(k < s-1)
            {
                if (abs(arr[k + 1] - arr[k]) > 1)
            {
                count++;
            }
            }
            if(k == s-1)
            {
                if(abs(arr[0] - arr[k]) < 1)
                {
                    count++;
                }
            }
        }
        if (count == s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}