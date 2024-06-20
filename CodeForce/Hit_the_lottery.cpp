//https://codeforces.com/problemset/problem/996/A

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    count += (n / 100);
    n %= 100;
    count += (n / 20);
    n %= 20;
    count += (n / 10);
    n %= 10;
    count += (n / 5);
    n %= 5;
    count += n;
    cout<<count;

    // count += (n % 100) / 20;
    // count += (n % 20) / 10;
    // count += (n % 10) / 5;
    // count += ()
}