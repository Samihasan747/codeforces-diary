#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int count1=0,count2=0;
 
    if(a>c)
    {
    for(int i=a ; i>b ; i--)
        count1++;
    for(int i=c ; i<b ; i++)
        count2++;
    }
 
    else
    {
    for(int i=c ; i>b ; i--)
        count1++;
    for(int i=a ; i<b ; i++)
        count2++;
    }
 
 
 
    cout<<count1+count2;
}