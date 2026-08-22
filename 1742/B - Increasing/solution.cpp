#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,countt=0;
        cin>>n;
        int arr[n];
 
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
 
        sort(arr,arr+n);
        for(int i=0 ; i<n-1 ; i++){
            if(arr[i] == arr[i+1]){
                countt++;
            }
        }
 
        if(countt != 0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}