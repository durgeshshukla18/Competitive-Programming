//https://codeforces.com/problemset/problem/677/A

#include<iostream>
using namespace std;
int main(){
    int numFriends, h;
    cin>>numFriends>>h;
    int heightFriends[numFriends];
    int count = 0;
    for(int i = 0; i < numFriends; i++){
        cin>>heightFriends[i];
        if(heightFriends[i]<=h){
            count++;
        }else{
            count+=2;
        }
    }
    cout<<count;
}