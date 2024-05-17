// https://codeforces.com/problemset/problem/1669/A

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        int r;
        cin>>r;
        if(r >= 1900) cout<<"Division 1"<<endl;
        else if(r >= 1600 && r <= 1899) cout<<"Division 2"<<endl;
        else if(r >= 1400 && r <= 1599) cout<<"Division 3"<<endl;
        else cout<<"Division 4"<<endl;

    }
}