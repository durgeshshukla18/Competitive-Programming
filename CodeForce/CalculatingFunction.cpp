#include<bits/stdc++.h>
using namespace std;
int sum(int x){
    int s = 0;
    while(x>0){ 
    if(x%2!=0) s-=x;
    else s+=x;
    x--;
    }
    return s;

}
int main(){
    int n;
    cin>>n;
    int o = sum(n);
    // while(n>0){
    //     if(n%2!=0) sum-=n;
    //     else sum+=n;
    //     n--;
    //     // sum += (pow(-1, n)*n);
    //     // n--;
    // }
    cout<<o;
}