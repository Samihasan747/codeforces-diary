#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,pasNum=0,maxNum=0;
    cin>>n;
    int arr[n*2];
 
    for(int i=0 ; i<n*2 ; i++)
        cin>>arr[i];
 
    for(int i=0 ; i<n*2 ; i++){
        if(i%2 != 0){
            pasNum+=arr[i];
        }
        else{
            pasNum-=arr[i];
        }
 
        if(pasNum > maxNum){
            maxNum = pasNum;
        }
    }
    cout<<maxNum<<endl;
}