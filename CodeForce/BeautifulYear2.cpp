// https://codeforces.com/problemset/problem/271/A

#include<iostream>
#include<string>
using namespace std;
int main(){
    int year;
    cin>>year;
    string y = to_string(year);
    int count = 0;
    while(true){
        year++;
        // int a = year/1000;
        // int b = (year/100);
        for(int i = 1; i < 4; i++){
            if(y[0] != y[3])
            {
                count++;
            }
            else if(y[i - 1] != y[i])
            {
                count++;
            }
        }
        if(count == 4)
        {
            return true;
        }
    }
    cout<<year;
}