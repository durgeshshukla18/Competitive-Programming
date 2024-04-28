#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x = 0 ;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        for(int j=0;j<3;j++){
            if(s[j]=='+'){
                x++;
                break;
            }
            if(s[j]=='-'){
                x--;
                break;
            }
            
        }

        }
            cout<<x<<endl;

    }
