#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<pair<int,int>> dragons;
    int s,n,count=0;
    cin>>s>>n;
    int a,b;
 
    for(int i=0 ; i<n ; i++){
        cin>>a>>b;
        dragons.push_back({a,b});
    }
 
    sort(dragons.begin(), dragons.end());
 
    for(auto x:dragons){
        if(s > x.first){
            s+=x.second;
            count++;
        }
    }
 
    if(count == n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 
 
 
}