//https://codeforces.com/problemset/problem/116/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cap = 0;
    int temp = 0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        temp -= a;
        temp += b;
        if(temp > cap){
            cap = temp;
        }
    }
    cout<<cap;
}