#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long int t;
    cin>>t;
 
    while(t--){
        int h,m;
        cin>>h>>m;
        int r=((23-h)*60)+(60-m);
        cout<<r<<endl;
    }
}