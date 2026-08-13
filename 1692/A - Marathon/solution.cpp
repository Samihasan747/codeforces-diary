#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,count=0;
    cin>>n;
    int k = n;
    long long arr[n];
    while(k > 0)
    {
 
    for(int i=0 ; i<4 ; i++)
        cin>>arr[i];
 
    for(int i=1 ; i<4 ; i++)
    {
        if(arr[0] < arr[i])
            count++;
    }
    cout<<count<<endl;;
    k--;
    count=0;
    }
 
}