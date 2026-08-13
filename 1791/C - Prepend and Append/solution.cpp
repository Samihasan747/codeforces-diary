#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
    int n,r=0;
    string s;
    cin>>n>>s;
    int p;
    if(n%2 == 0)
        p=n/2;
    else
        p=(n/2)+1;
 
    for(int i=0 ; i<p ; i++)
        {
            if(s[i] == s[n-i-1])
                {
                    r = n - 2*i;
                    break;
                } 
        }      
    cout<<r<<endl;
        
    }
}