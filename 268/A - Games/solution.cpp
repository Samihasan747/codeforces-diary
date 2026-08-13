#include<iostream>
using namespace std;
 
int main()
{
    int n,count=0;
    cin>>n;
    int arr1[n];
    int arr2[n];
 
    for(int i=0 ; i<n; i++)
    {
        cin>>arr1[i];
        cin>>arr2[i];
 
    }
 
 
    for(int i=0 ; i<n; i++)
    {
        for(int j=0 ; j<n; j++)
        {
            if(i == j)
                continue;
 
            if(arr1[i] == arr2[j])
                count++;
        }
    }
 
    cout<<count;
}
 