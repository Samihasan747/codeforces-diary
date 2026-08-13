#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string s;
 
    while(n--)
    {
        cin>>s;
        cout<<s[0];
        for(int i=0 ; i<s.size() ; i++)
        {
            if(i%2 != 0)
                cout<<s[i];
        }
        cout<<endl;
    }
 
}