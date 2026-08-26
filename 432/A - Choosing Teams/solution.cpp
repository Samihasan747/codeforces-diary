#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,x,count=0;
    cin>>n>>x;
    int arr[n];
 
    for(int i=0 ; i<n ; i++){
        int p;
        cin>>p;
        arr[i] = p+x;
        if(arr[i] <= 5){
            count++;
        }
    }
 
    cout<<floor(count/3)<<endl;
 
}