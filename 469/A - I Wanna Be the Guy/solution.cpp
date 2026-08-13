#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a,b;
    cin>>n>>a;
    int arr1[a];
    for(int i=0 ; i<a ; i++)
    {
        cin>>arr1[i];
    }
    cin>>b;
    int arr2[b];
    for(int i=0 ; i<b ; i++)
    {
        cin>>arr2[i];
    }
 
    int c=a+b;
    int arr[c];
    int count=1;
 
    for(int i = 0 ; i<a ; i++)
    {
        arr[i] = arr1[i];
    }
    for(int i = 0 ; i<b ; i++)
    {
        arr[i+a] = arr2[i];
    }
 
    sort(arr,arr+c);
    for(int i=0 ; i<c-1 ; i++)
    {
 
        if(arr[i] != arr[i+1])
            count++;
    }
 
 
    if(count == n && (a != 0 || b!= 0))
        cout<<"I become the guy."<<endl;
 
    else
        cout<<"Oh, my keyboard!"<<endl;
 
}