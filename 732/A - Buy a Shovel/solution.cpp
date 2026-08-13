#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int k,r,s;
    cin>>k>>r;
 
    for(int i=1 ; i<=1000 ;i++)
    {
        int a=k*i;
        
        if(a%10 == 0 || a%10 == r)
        {
            s = i;
            break;
        }
    }
    cout<<s;
}