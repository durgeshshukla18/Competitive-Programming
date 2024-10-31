#include<iostream>
using namespace std;
int main(){
    char c;
    string s;
    cin>>c>>s;
    string st = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j <st.size(); j++){
            if(s[i] == st[j]){
                if(c == 'L'){
                    cout<<st[j + 1];
                }
                else{
                    cout<<st[j - 1];
                }
            }
        }
    }
}