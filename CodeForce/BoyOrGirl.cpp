//https://codeforces.com/problemset/problem/236/A


#include<bits/stdc++.h>
using namespace std;
int cntDistinct(string str){
    map<char, int> count;
    for(int i = 0; i < str.size(); i++){
        count[str[i]]++;
    }
    return count.size();
}
int main(){
    string s;
    cin>>s;
    // int count = 0;
    int a = cntDistinct(s);
    if(a%2==1){
        cout<<"IGNORE HIM!";
    }if(a%2==0){
        cout<<"CHAT WITH HER!";
    }
}
    // for(int i=0;i<s.length();i++){
    //     if(i<s.length()-1){
    //         if(s[i]!=s[i+1]){
    //             count++;
    //         }
    //     }
    //     if(s[0]!=s[s.length()]){
    //         count++;
    //     }
    // }