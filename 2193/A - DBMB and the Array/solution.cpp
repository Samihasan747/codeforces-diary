#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n,s,x;
    cin>>t;
    while(t--){
        cin>>n>>s>>x;
        int sum=0;
        int arr[n];
        for(int i=0 ; i<n; i++){
            cin>>arr[i];
        }
 
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum == s) {
                cout<<"YES"<<endl;
                continue;
        }
 
        while(sum < s){
            sum+=x;
 
        if(sum == s){
                cout<<"YES"<<endl;
                continue;
        }
        }
        if(sum != s)
            cout<<"NO"<<endl;
 
        }
}