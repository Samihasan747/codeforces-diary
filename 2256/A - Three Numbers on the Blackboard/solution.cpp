#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
 
    int a,b,c;
    cin>>a>>b>>c;
 
    int maxx = max({a,b,c});
    int minn = min({a,b,c});
    int summ = a+b+c-maxx;
    if(summ < maxx){
        maxx = summ;
    }
    int range = maxx - minn;
    cout<<range<<endl;
    }
}