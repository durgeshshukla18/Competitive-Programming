#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    string c[a.length()];
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            c[i] = '0';
        }
        else
        {
            c[i] = '1';
        }
        cout << c[i];
    }
}