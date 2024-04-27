#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    string word;
    cin>>word;
    int s = word.length();
    if(s>10){
        cout<<word[0]<<(s-2)<<word[s-1]<<endl;
    }else{
        cout<<word<<endl;
    }
    }
}