#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        string s;
        cin>>s;
        int count = 0;
        for(int j = 0; j < s.length(); j++){
            if(j<s.length()-1){
                if(s[j]==s[j+1]){
                    count++;
                }
            }
        }
        if(count>0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}