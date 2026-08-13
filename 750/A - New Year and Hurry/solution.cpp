#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int r = 240-k;
 
    for(int i=1; i<=n ;i++)
    {
        r-=(5*i);
        if(r >= 0)
            count++;
        else
            break;
 
 
    }
    cout<<count;
}