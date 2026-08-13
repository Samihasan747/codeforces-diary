#include<iostream>
using namespace std;
 
int main()
{
    string c = "codeforces";
    int n;
    cin>>n;
 
    while(n--)
    {
        int count = 0;
        string s;
        cin>>s;
 
        for(int i=0 ; i<10 ; i++)
        {
            if(s[i] != c[i])
            count++;
        }
        cout<<count<<endl;
    }
}