#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p = pow(5, n);
    string s = to_string(p);
    int l = s.size();
    // for(int i = l - 1; i > (l - 3); i-- ){

    // }
    s[l - 1] += s[l - 2];
    // cout<<s[l - 1]<<endl;
    // cout<<s[l - 2]<<endl;
    // int str = strcat(s[l - 1], s[l - 2]);
    // cout<<s[l - 1] + s[l- 2];
    cout<<25;
}