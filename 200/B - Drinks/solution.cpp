#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    long  double sum=0;
    int arr[1000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    long  double result = sum/n;
 
    cout<<result;
 
}