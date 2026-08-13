#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char s[100];
    int n;
    cin>>n;
    for(int i=0 ; i<=n ; i++)
    {
        gets(s);
        if(s[strlen(s)-1]=='s' && s[strlen(s)-2]=='u')
        {
            s[strlen(s)-1]=' ';
            s[strlen(s)-2]='i';
        }
        cout<<s<<endl;
    }
}
 