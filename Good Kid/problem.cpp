#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,prod=1;
        cin>>n;
        int arr[n];

        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        sort(arr,arr+n);

        arr[0]++;

        for(int i=0 ; i<n ; i++){
            prod*=arr[i];
        }

        cout<<prod<<endl;

    }

}
