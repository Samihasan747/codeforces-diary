#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,legs=0;
        cin>>n;
 
        legs+=n/4;
        n=n-(legs*4);
        legs+=n/2;
 
        cout<<legs<<endl;
    }
}