#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[3];
    while(n--)
    {
        for(int i=0 ; i<3 ; i++)
            cin>>arr[i];
 
        if(arr[0] == arr[1])
            cout<<arr[2]<<endl;
        else if(arr[0] == arr[2])
            cout<<arr[1]<<endl;
        else
            cout<<arr[0]<<endl;
    }
}