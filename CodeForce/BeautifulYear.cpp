#include<iostream>
using namespace std;
int check(int year){
    string x = to_string(year);
    int count = 0;
    for(int i=0;i<4;i++){
        while(i<3){
            if(x[i]==x[i+1]){
                count++;
            }
        }
        if(x[0]==x[3]){
            count++;
        }
    }
    if(count>0){
        return true;
    }
    while(check(year)!=true){
        year++;
    }
    cout<<year;
}
int main(){
    int y;
    cin>>y;
    int count = 0;
    int ycount = 0;
    string a = to_string(y);
    check(y);
}