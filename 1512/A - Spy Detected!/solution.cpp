#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>m;
    while(m--)
    {
 
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
 
    int a;
    {
        if(arr[0]==arr[1]) a=arr[0];
        else if(arr[0]==arr[2]) a=arr[0];
        else a = arr[1];
    }
    for(int i=0 ; i<n; i++)
        if(arr[i] != a) cout<<i+1<<endl;
    }
}