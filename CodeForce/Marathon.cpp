#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count = 0;
        if(a-b < 0) count++;
        if(a-c < 0) count++;
        if(a-d < 0) count++;
        cout<<count<<endl;
    }
}