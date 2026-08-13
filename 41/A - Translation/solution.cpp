#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s,t;
    int count=0;
    cin>>s;
    cin>>t;
    int n=s.size() - 1;
    for(int i=0 ; i<n/2+1  ; i++)
    {
        char temp = s[i];
        s[i] = s[n-i];
        s[n-i] = temp;
 
    }
 
    for(int i=0 ; i<n+1 ; i++){
        if(s[i] == t[i])
        {
            count++;
        }
    }
 
 
    if(count == n+1 && s.size() == t.size())
        cout<<"YES";
    else
        cout<<"NO";
 
 
 
}