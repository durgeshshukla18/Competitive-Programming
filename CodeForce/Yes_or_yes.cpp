//https://codeforces.com/problemset/problem/1703/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length() != 3){
            cout<<"No"<<endl;
        }
        else if((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's')){
            cout<<"Yes"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}