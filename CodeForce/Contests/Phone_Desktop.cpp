#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        int x,y;
        cin>>x>>y;
        int count = 0;
        if(y % 2 == 0)
        {
            count += y/2;
            if(x )
        }
    }
}





















// #include<iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++)
//     {
//         int x,y;
//         cin>>x>>y;
//         int count = 0;
//         if(y % 2 == 0) 
//         {
//             count += (y % 2);
//             if(x % 7 == 0)
//             {
//                 if( count <= (x/7)){
//                     count += 0;
//                 }else{
//                     count = (x/7); //- count;
//                 }
//             }
//             else{
//                 count += (x % 7) + 1;
//             }
//         }

//         else if(y % 2 != 0){
//             count += (y % 2) + 1;
//             if(x <= (count*7) + 1){
//                 count += 0;
//             }else{
//                 if((x - ((count * 7) + 1)) % 15 == 0)
//                 count += ((x - ((count * 7) + 1)) / 15);
//                 else count += ((x - ((count * 7) + 1)) / 15) + 1;
//             }


//             // if((x-1) % 7 == 0){
//             //     if(count <= x/7)
//             //     count += 0;
//             // }
//             // else{

//             // }
//         }
//         // else count += (y % 2) + 1;



//     cout<<count<<endl;
//     }
// }