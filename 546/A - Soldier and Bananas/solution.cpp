#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long k,n,w,m=0,p;
 
    cin>>k>>n>>w;
 
    for(int i=1 ; i<=w ; i++)
    {
        m+=k*i;
    }
 
    if(m>n)
    {
        p=m-n;
    }
    else{
        p=0;
    }
 
    cout<<p;
}
 