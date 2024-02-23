#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    for(int j=0;j<m;j++){
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]<=b[j]){
                count++;
            }
            // cout<<count;
        }
        cout<<count<<" ";
    }
    
}