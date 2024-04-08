#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        char s[n];
        for(int j=0;j<n;j++){
            cin>>s[j];
        }
        int count;
        for(int k=0;k<n;k++){
            if(s[k]==1){
                count++;
            }
            if(count%2!=0){
                cout<<"No";
            }
        }

    }
}
