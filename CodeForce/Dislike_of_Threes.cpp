//https://codeforces.com/problemset/problem/1560/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int input;
        cin>>input;
        int num = 0;
        for(int i = 1; i <= input; i++){
            num++;
            if((num % 3 == 0) || (num % 10) == 3){
                i--;
            }
        }
        cout<<num<<endl;
    }
}