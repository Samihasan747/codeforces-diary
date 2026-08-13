#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a,b,c;
    cin>>n;
 
    while(n>0)
    {
    cin>>a>>b>>c;
 
    if(a+b == c || b+c == a || a+c == b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    n--;
    }
}