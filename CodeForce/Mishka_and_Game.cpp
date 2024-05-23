#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cntmis = 0, cntchr = 0;
    while(n--)
    {
        int mis, chr;
        cin>>mis>>chr;
        if(mis == chr) cntmis += 0;
        else if(mis > chr) cntmis += 1;
        else cntchr += 1;

    }
    if(cntmis > cntchr) cout<<"Mishka"<<endl;
    else if(cntchr > cntmis) cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
}