#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 0;
    char var = s[0];
    for(int j = 0; j < s.size(); j++){
        if(s[j] >= 65 && s[j] <= 90){
            count++;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(s.size() == count || ((s.size() - 1 == count) && (var >= 97 && var <= 122))){
            if(s[i] >= 65 && s[i] <= 90){
                s[i] += 32;
            }
            else{
                s[i] -= 32;
            }
        }
    }
    cout<<s;
}