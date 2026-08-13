#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,count=0;
 
    cin>>a>>b;
 
    for(int i=0 ; a<=b ; i++)
    {
        count++;
        a=a*3;
        b=b*2;
 
    }
 
    cout<<count;
}