#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int zero, one = 1;
    int mx_zero, mx_one = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0')
        {
            while(s[i+1] == '0')
            {
                i++;
                zero++;
            }
            if(zero >= mx_zero){
                mx_zero = zero;
                zero = 0;
            }
        }
        if(s[i] == '1')
        {
            while(s[i] == '1')
            {
                one++;
                i++;
            }
            if(one >= mx_one){
                mx_one = one;
                one = 0;
            }
        }
        
    }
    cout<<zero<<endl;
    cout<<one<<endl;
    cout<<mx_zero<<endl;
    cout<<mx_zero<<endl;
    if(mx_zero >= 7 || mx_one >= 7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}





















// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int zero, one, mx_zero, mx_one = 0;
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] == '0'){
//             while(s[i] == '1'){
//                 zero++;
//             }
//             if(zero > mx_zero){
//                 mx_zero = zero;
//                 zero = 0;
//             }
//         }
//         i+=mx_zero;
//         if(s[i] == '1'){
//             while(s[i] == '0'){
//                 one++;
//             }
//             if(one > mx_one){
//                 mx_one = one;
//                 one = 0;
//             }
//         }
//         i+=mx_one;
//     }
//     cout<<zero<<endl;
//     cout<<one<<endl;
//     cout<<mx_zero<<endl;
//     cout<<mx_zero<<endl;
//     if(mx_zero >= 7 || mx_one >= 7){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
// }