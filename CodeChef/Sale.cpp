#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,m;
    cin>>t>>m;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    int sum=0;
    for(int j=0;j<m;j++){
        if(a[j]<0){
            sum=sum+a[j];
        }
    }
    cout<<(sum*(-1));

}