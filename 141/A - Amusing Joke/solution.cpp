#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    string s,t,r;
    int count=0;
 
    cin>>s>>t>>r;
 
    for(int i=0 ; i<t.size() ; i++)
        s+=t[i];
    sort(s.begin(),s.end());
    sort(r.begin(),r.end());
 
    if(s == r)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}