#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int arr[n];
   int count=0;
   int max=0;
   int sum=0;
 
   for(int i=0 ; i<n ; i++)
    cin>>arr[i];
 
   sort(arr, arr + n, greater<int>());
 
   for(int i=0 ; i<n ; i++){
    max+=arr[i];
   }
 
   for(int i=0 ; i<n ; i++){
        if(sum <= max){
            sum+=arr[i];
            max-=arr[i];
            count++;
        }
 
   }
            cout<<count;
 
}