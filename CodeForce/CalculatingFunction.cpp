#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num / 2;
    }
    else
    {
        cout << '-' << (num / 2) + 1;
    }
}

// int sum(int x){
//     int s = 0;
//     while(x>0){
//     if(x%2!=0) s-=x;
//     else s+=x;
//     x--;
//     }
//     return s;

// }
// int main(){
//     int n;
//     cin>>n;
//     int o = sum(n);
//     // while(n>0){
//     //     if(n%2!=0) sum-=n;
//     //     else sum+=n;
//     //     n--;
//     //     // sum += (pow(-1, n)*n);
//     //     // n--;
//     // }
//     cout<<o;
// }