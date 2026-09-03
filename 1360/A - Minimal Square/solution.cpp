#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
 
        int a = max({x,y});
        int b = min({x,y});
 
        if(a > 2*b){
            cout<<a*a<<endl;
        }else{
            cout<<4*b*b<<endl;
        }
    }
}