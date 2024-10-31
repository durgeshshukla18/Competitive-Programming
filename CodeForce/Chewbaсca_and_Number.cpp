#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[0] - '0' == 9) cout<<(s[0]-'0');
    else{
        if((s[0] - '0') >= 9-(s[0] - '0')){
            cout<<(9-(s[0] - '0'));   
        }
        else{
            cout<<(s[0] - '0');
        }
    }
    for(int i = 1; i < s.size(); i++){
        if((s[i] - '0') >= 9-(s[i] - '0')){
            cout<<(9-(s[i] - '0'));   
        }
        else{
            cout<<(s[i] - '0');
        }
    }
}