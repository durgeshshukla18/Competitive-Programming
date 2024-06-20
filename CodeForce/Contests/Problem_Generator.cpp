#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        string c = "ABCDEFG";
        int arr[7] = {0,0,0,0,0,0,0};
        for(int i = 0; i < s.length(); i++)
        {
            arr[s[i] - 65]++;
        }
        int count = 0;
        for(int j = 0; j < 7; j++)
        {
            if(arr[j] < m)
            {
                count += (m - arr[j]);
            }
        }
        cout<<count<<endl;
    }
}