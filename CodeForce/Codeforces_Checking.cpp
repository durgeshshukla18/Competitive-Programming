#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        string check = "codeforces";
        char a;
        cin>>a;
        int count = 0;
        for(int j = 0; j < check.length(); j++)
        {
            if(a == check[j]){
                cout<<"YES"<<endl;
                break;
            }else{
                count++;
                //cout<<"NO"<<endl;
            }
        }
        if(count == check.length()){
            cout<<"NO"<<endl;
        }
    }
}