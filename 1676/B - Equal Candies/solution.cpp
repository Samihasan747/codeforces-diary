#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,minx=10e7,res=0;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
 
        for(int i=0 ; i<n ; i++){
            if(arr[i] < minx){
                minx = arr[i];
            }
        }
 
        for(int i=0 ; i<n ; i++){
            res+=arr[i] - minx;
        }
 
 
        cout<<res<<endl;
    }
}