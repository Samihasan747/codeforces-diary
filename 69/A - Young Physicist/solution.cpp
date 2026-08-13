#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,sum1=0,sum2=0,sum3=0;
    int arr[100][100];
 
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin>>arr[i][j];
        }
    }
 
    for(int i=0 ; i<n ; i++)
    {
        for(int j=2 ; j<3 ; j+=1)
        {
            sum1+=arr[i][j];
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=1 ; j<3 ; j+=2)
        {
            sum2+=arr[i][j];
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<3 ; j+=3)
        {
            sum3+=arr[i][j];
        }
    }
 
    if(sum1==0 && sum2==0 && sum3==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
 
}