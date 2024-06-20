#include<bits/stdc++.h>
using namespace std;
bool check(int y){
    string c = to_string(y);
    int count = 0;
    for(int i = 1; i < 4; i++)
    {
        if(c[i-1] != c[i])
        {
            count++;
        }
    }
    if(c[0] != c[3]) count++;
    if(count == 4)
    {
        return true;
    }
    // if(c[0] != c[1] && c[1] != c[2] && c[2] != c[3] && c[3] != c[0] )
    // {
    //     return true;
    // }
    //else return false;
}
int main(){
    int year;
    cin>>year;
    while(true)
    {
        year++;
        check(year);
    }
    cout<<year;
}














// #include <bits/stdc++.h>
// using namespace std;
// // int check(int y){

// // }
// int main()
// {
//     int year;
//     cin >> year;
//     // int count = 1;
//     while (true)
//     {
//         string s = to_string(year);
//         if(s[0] != s[1] && s[1] != s[2] && s[2] != s[3] && s[3] != s[0])
//         {
//             return true;
//         }
//         else{
//             year++;
//         }
//     }
//     cout<<year+1;
// }



