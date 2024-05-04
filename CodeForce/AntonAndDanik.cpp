//https://codeforces.com/problemset/problem/734/A

#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    string s;
    cin>>s;
    int Anton=0;
    int Danik = 0;
    for(int i=0;i<num;i++){
        if(s[i]=='A') Anton++;
        if(s[i]=='D') Danik++;
    }
    if(Anton>Danik) cout<<"Anton";
    else if(Anton<Danik) cout<<"Danik";
    else cout<<"Friendship";
}