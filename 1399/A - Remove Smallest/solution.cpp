#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,count=0;
        cin>>n;
        int arr[n];
 
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
 
        sort(arr,arr+n);
 
        for(int i=0 ; i<n-1 ; i++){
            if(abs(arr[i+1] - arr[i]) <= 1){
                count++;
            }
        }
        if(count == n-1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}