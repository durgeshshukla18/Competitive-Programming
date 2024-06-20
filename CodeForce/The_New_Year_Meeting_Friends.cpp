//https://codeforces.com/contest/723/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    // int dist = abs(x3 - x1);
    // int totalDist = (abs(dist - x1) + abs(dist - x2) + abs(dist - x3));
    // cout<<totalDist;

    int maximum = max(x1, x2);
    int minimum = min(x1, x2);
    int max2 = max(maximum, x3);
    int min2 = min(minimum, x3);
    cout<<(max2 - min2);
    //cout<<maximum;
}