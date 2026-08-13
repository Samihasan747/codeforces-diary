#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a,b;
    cin>>n;
 
    while(n--)
    {
        cin>>a>>b;
        int r = (abs(a-b)+9)/10;
        cout<<r<<endl;
    }
 
}