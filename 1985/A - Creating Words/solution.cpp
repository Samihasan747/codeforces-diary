#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string s1, s2;
    while(n--)
    {
        cin>>s1>>s2;
 
        char temp = s1[0];
        s1[0] = s2[0];
        s2[0] = temp;
 
    cout<<s1<<" "<<s2<<endl;
    }
 
}