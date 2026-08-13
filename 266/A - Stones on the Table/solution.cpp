#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,count=0;
    string s;
 
    cin>>n;
    cin>>s;
    count=0;
    for(int j=0 ; j<s.size() ; j++)
        {
            if(s[j]==s[j+1])
            {
                count++;
            }
 
        }
        cout<<count<<endl;
}