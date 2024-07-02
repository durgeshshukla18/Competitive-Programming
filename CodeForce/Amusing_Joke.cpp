//https://codeforces.com/problemset/problem/141/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string guest;
    cin>>guest;
    string host;
    cin>>host;
    string letters;
    cin>>letters;
    sort(letters.begin(), letters.end());
    string name = guest + host;
    sort(name.begin(), name.end());
    // int comp = strcmp(letters, name);
    int comp = letters.compare(name);
    if(comp == 0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}