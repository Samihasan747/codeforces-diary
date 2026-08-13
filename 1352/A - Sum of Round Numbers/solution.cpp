#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int m,n;
    cin>>m;
 
    for(int i=0 ; i<m ; i++)
    {
    int p=0;
    int count=1;
    cin>>n;
    int k=n;
 
    while(k>0)
    {
        if(k%10 != 0)
            p++;
        k/=10;
    }
        cout<<p<<endl;
 
 
    while(n>0)
    {
        if(n%10 != 0)
        {
            cout<<(n%10)*count<<" ";
        }
        count*=10;
        n/=10;
    }
    cout<<endl;
    }
    cout<<endl;
 
}