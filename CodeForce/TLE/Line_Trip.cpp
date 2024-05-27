#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int>a(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int max = 0;
        for (int j = 1; j < n; j++)
        {
            if (abs(a[j - 1] - a[j]) > max)
            {
                max = abs(a[j - 1] - a[j]);
            }
        }
        if(a.size() == 1){
            if(a[0] == 1) cout<<x<<endl;
            else if(a[0] > x - a[0]) cout<<a[0]<<endl;
            else cout<<x - a[0]<<endl;
        }
        else if (2 * (x - (a[n - 1])) > max)
        {
            cout << (2 * (x - (a[n - 1]))) << endl;
        }
        else
        {
            cout << max << endl;
        }
    }
}