#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    int n,countA = 0, countD=0;
    cin>>n;
    cin>>s;
 
 
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i] == 'A')
        {
            countA++;
        }
        if(s[i] == 'D')
        {
            countD++;
        }
    }
 
    if(countA == countD)
    {
        cout<<"Friendship";
    }
    else if(countA > countD)
    {
        cout<<"Anton";
    }
    else
    {
        cout<<"Danik";
    }
}