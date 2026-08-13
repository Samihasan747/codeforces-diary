#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        int n,count=1, max=1,one = 0;
        cin>>n;
        int arr[n];
        for(int i=0; i <n ; i++)
            cin>>arr[i];
 
        for(int i=0 ; i<n ; i++)
        {
            if(arr[i] == arr[i+1] && arr[i] == 0)
            {
                count++;
                if(count > max)
                    max = count;
            }
 
            if(arr[i] == 1)
                one++;
           
            if(arr[i] == 0 && arr[i+1] == 1)
                count=1;
            
        }
 
        if(one == n)
            max = 0;
    
        cout<<max<<endl;
        
 
    }
}