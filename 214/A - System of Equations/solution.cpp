#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int m,n,count=0;
 
    cin>>m>>n;
 
 
    for(int i=0 ; i<1000 ;i++)
    {
        for(int j=0 ; j<1000 ;j++)
        {
            if(n==(i*i+j) && (i+j*j)==m)
            {
                count++;
            }
        }
    }
 
    cout<<count;
}