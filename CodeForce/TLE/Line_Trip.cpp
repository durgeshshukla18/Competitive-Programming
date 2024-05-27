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
        for (int k = 1; k < n; k++)
        {
            if (abs(a[k - 1] - a[k]) > max)
            {
                max = abs(a[k - 1] - a[k]);
            }
        }
        if(a.size() == 1){
            if(a[0] > (2*(x - a[0]))) cout<<a[0]<<endl;
            else cout<<(2*(x - a[0]))<<endl;
        }
        else if(a[0] > max && a[0] >  (2 * (x - (a[n - 1]))))
        {
            cout<<a[0]<<endl;
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