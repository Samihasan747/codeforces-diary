#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    vector<int> arr;
    cin>>m;
    while(m--)
    {
        for(int i=0 ; i<=1666 ; i++)
        {
            if(i%3 != 0 && i%10 != 3 && i%100 != 3)
                arr.push_back(i);
        }
 
        cin>>n;
        cout<<arr[n-1]<<endl;
 
    }
}