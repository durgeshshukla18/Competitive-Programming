#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // int i = stoi(s[0]);
        // int j = stoi(s[2]);
        cout<<(s[0] - '0'+s[2] - '0')<<endl;
    }
}