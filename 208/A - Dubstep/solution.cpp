#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s,t="";
    cin>>s;
    int n = s.size();
 
    for(int i=0 ; i<n ; i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            t+=' ';
            i=i+2;
        }else{
            t+=s[i];
        }
    }
    t.erase(0, t.find_first_not_of(' '));
    cout<<t;
}