#include<bits/stdc++.h>
using namespace std;
 
int main ()
{
    long long t;
    cin>>t;
    while(t--){
 
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int maxDistance=arr[0];
        for(int i=0 ; i<n-1 ; i++){
            if(abs(arr[i] - arr[i+1]) > maxDistance){
                maxDistance = abs(arr[i] - arr[i+1]);
            }
        }
        if(n == 1){
            maxDistance = arr[0];
        }
        int lastDistance = abs(arr[n-1] - x);
 
 
        if(maxDistance < 2*lastDistance){
            cout<<2*lastDistance<<endl;
        }else{
            cout<<maxDistance<<endl;
        }
 
    }
}