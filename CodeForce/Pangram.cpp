//https://codeforces.com/problemset/problem/520/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> alpha(26, 0);
    int count = 0;
    for(int i = 0; i < n; i++){
        if(n < 26){
            cout<<"NO";
            break;
        }
        alpha[s[i]]++;
    }
    for(int j = 0; j < 26; j++){
        if(alpha[j] > 0){
            count++;
        }
    }
    if(count == 26) cout<<"YES";
    else cout<<"NO";
}