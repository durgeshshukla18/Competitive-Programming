//https://codeforces.com/problemset/problem/1722/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count = 0;
        if(s.size() == 5){
            for(int i = 0; i < 5; i++){
               if(s[i] == 'T' || s[i] == 'i' || s[i] == 'm' || s[i] == 'u' || s[i] == 'r'){
                count++;
               }
            }
            if(count == 5){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }

        else{
            cout<<"No"<<endl;
        }
    }
}