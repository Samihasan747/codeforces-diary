#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,h,count=0;
    cin>>n;
 
    int *arr = new int[n];
    cin>>h;
 
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
 
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] <= h)
            count++;
        else
        {
            count += 2;
        }
    }
 
    cout<<count<<endl;
}