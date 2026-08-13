#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s = "" ;
    char arr[1000];
 
    for(int i=0 ; ; i++)
    {
        cin>>arr[i];
        if(arr[i] == '}')
            break;
    }
 
    for(int i=1 ; arr[i-1] != '}' ; i+=2)
    {
        s += arr[i];
    }
 
    int count=0;
    sort(s.begin(),s.end());
 
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i] < 'a' || s[i] > 'z')
            break;
 
        if(s[i] != s[i+1])
            count++;
    }
    cout<<count;
 
}