#include<bits/stdc++.h>
using namespace std;
 
void caps(string s){
    if(all_of(s.begin(), s.end(), ::isupper)){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }else if((s[0] == tolower(s[0])) && all_of(s.begin()+1, s.end(), ::isupper)){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
    }
 
    cout<<s;
}
 
int main()
{
    string s;
    cin>>s;
 
    caps(s);
}