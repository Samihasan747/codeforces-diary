#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a,b;
    cin>>n;
 
    if(n%2==0)
    {
        a=4;
        b=n-a;
    }
    else
    {
        a=9;
        b=n-a;
    }
 
    cout<<a<<" "<<b;
}