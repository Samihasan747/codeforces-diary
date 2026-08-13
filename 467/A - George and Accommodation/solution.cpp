#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[1000];
    int n, count=0;
    cin>>n;
 
    for(int i=0 ; i<2*n ; i++)
    {
        cin>>arr[i];
    }
 
    for(int i=0 ; i<2*n ; i+=2)
    {
        if(arr[i+1]-arr[i] >= 2)
            count++;
    }
 
 
    cout<<count;
 
 
 
}