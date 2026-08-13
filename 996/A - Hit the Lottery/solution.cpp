#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long int n,count = 0;
    cin>>n;
 
    here :
        while(n>0)
    {
        if(n >= 100)
        {
            count++;
            n-=100;
            goto here;
        }
        if(n >= 20)
        {
            count++;
            n-=20;
            goto here;
        }
        if(n >= 10)
        {
            count++;
            n-=10;
            goto here;
        }
        if(n >= 5)
        {
            count++;
            n-=5;
            goto here;
        }
        if(n >= 1)
        {
            count++;
            n-=1;
            goto here;
        }
 
    }
    cout<<count;
}