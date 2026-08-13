#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    int count1=0,count2=0;
    cin>>s;
 
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            count1++;
    }
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]>='a' && s[i]<='z')
            count2++;
    }
 
    if(count2 >= count1)
    {
        for(int i = 0 ; i<s.size() ; i++)
        {
            cout<<(char)tolower(s[i]);
        }
    }
    else
    {
        for(int i = 0 ; i<s.size() ; i++)
        {
            cout<<(char)toupper(s[i]);
        }
    }
}