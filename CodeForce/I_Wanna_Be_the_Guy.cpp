// // https://codeforces.com/problemset/problem/469/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int level;
    cin>>level;
    int s1;
    cin>>s1;
    int x[s1];
    for(int i = 0; i < s1; i++){
        cin>>x[i];
    }
    int s2;
    cin>>s2;
    int y[s2];
    for(int j = 0; j < s2; j++){
        cin>>x[j];
    }
    int count = 0;
    int maxi = max(s1, s2);
    for(int i = 1; i <= level; i++){
        for(int l = 0; l < maxi; l++){
            if(i == x[l] || i == y[l]){
                count++;
            }
        }
    }
    if(count >= level){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}



























// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int level;
//     cin >> level;
//     int p1, p2;
//     cin >> p1;
//     int x[p1];
//     for (int i = 0; i < p1; i++)
//     {
//         cin >> x[i];
//     }
//     cin >> p2;
//     int y[p2];
//     for (int j = 0; j < p2; j++)
//     {
//         cin >> y[j];
//     }
//     int count = 0;
//     //int loop = level;
//     for(int k = 0; k < level; k++){

//     }




//     // while (level > 0)
//     // {
//     //     for (int k = 0; k < loop; k++)
//     //     {
//     //         if (level == x[k] || level == y[k])
//     //         {
//     //             count++;
//     //         }
//     //     }
//     //     level--;
//     // }
//     // if (count == level)
//     // {
//     //     cout << "I become the guy.";
//     // }
//     // else
//     // {
//     //     cout << "Oh, my keyboard!";
//     // }
// }