//https://codeforces.com/problemset/problem/41/A

#include<iostream>
using namespace std;
string RevStr(string& s){
    int n = s.length();
    for (int i = 0; i<n/2; i++)
        swap(s[i], s[n - i - 1]);

    return s;
}
int main(){
   string s,rev;
   cin>>s>>rev;
   //string r = RevStr(s);
//    for(int i = 0; i<s.length();i++){
//     if(rev[i]==RevStr(s))
//    }
    if(RevStr(s) == rev){
    cout<<"YES";
   }else{
    cout<<"NO";
   }
}