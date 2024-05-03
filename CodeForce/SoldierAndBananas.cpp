//https://codeforces.com/problemset/problem/546/A

#include<iostream>
using namespace std;
int main(){
    int price,balance,numBanana;
    cin>>price>>balance>>numBanana;
    int borrowAmount=0;
    for(int i=1;i<=numBanana;i++){
        int x = i*price;
        borrowAmount+=x;
    }
    if(borrowAmount>balance){
        cout<<borrowAmount-balance;
    }else{
        cout<<0;
    }
}