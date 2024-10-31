#include<iostream>>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y , z;
        cin>>x>>y>>z;
        int mini1 = min(x, y);
        mini1 = min(mini1, z);
        int maxi = max(x, y);
        maxi = max(maxi, z);
        
    }
}