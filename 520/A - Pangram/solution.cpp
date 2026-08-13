#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,count = 0;
    string s;
    cin>>n;
    cin>>s;
 
    for(int i=0; i<s.size() ; i++)
    {
        if(s[i] >= 'A' && s[i]<='Z')
            s[i] = s[i] + 32;
    }
 
    //sort the string
    for(int j=0 ; j<n ; j++)
    {
 
    for(int i=0 ; i<n-1 ; i++)
    {
        if(s[i] > s[i+1])
        {
            char t = s[i];
            s[i] = s[i+1];
            s[i+1] = t;
        }
    }
    }
 
    if(s.size() > 25)
    {
        for(int i=0 ; i<=n-1 ; i++)
        {
            if(s[i] != s[i+1])
                count++;
 
        }
        if(count >= 26)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
 
 
 
}