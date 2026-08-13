#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    int n,t;
 
    cin>>n>>t>>s;
 
 
    while(t--){
    for(int i=0 ; i<=n ; i++)
    {
 
        if(s[i] == 'B' && s[i+1] == 'G')
        {
            int t = s[i];
            s[i] = s[i+1];
            s[i+1] = t;
            i++;
        }
    }}
 
    cout<<s;
 
 
}
 