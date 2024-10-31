#include<iostream>
#include<iomanip>
#include <ios>
using namespace std;
int main(){
    double n;
    cin>>n;
    cout<<fixed<<setprecision(9)<<(3.141592653 * n * n);
}

