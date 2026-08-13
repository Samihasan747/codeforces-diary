#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count_even=0, count_odd=0;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
 
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2 == 0)
            count_even++;
        else
            count_odd++;
        }
 
    if(count_even == 1){
        for(int i=0 ; i<n ; i++){
            if(arr[i]%2 == 0){
                cout<<i+1<<endl;
            }
        }
    }
    else if(count_odd == 1){
        for(int i=0 ; i<n ; i++){
            if(arr[i]%2 != 0)
                cout<<i+1<<endl;
        }
    }
 
 
}
 