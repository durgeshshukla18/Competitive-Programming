#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i = 2; i <= s.size() - 1; i++){
        if(s[i - 2] == 'W' && s[i - 1] == 'U' && s[i] == 'B'){
            cout<<" ";
            i += 2;
        }
        else{
            cout<<s[i];
        }
    }
}