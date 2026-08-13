#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    int arr[n];
    int a=0 , b=0;
    int s=0 , d=0;

    for(int i=0 ; i<n ; i++){
    cin>>arr[i];
    }

    for(int i=0 ; i<n ; i++){
        if(i%2 == 0){
            if(arr[a] > arr[n-b-1]){
                s+=arr[a];
                a++;
            }
            else{
                s+=arr[n-b-1];
                b++;
            }
        }
        else{
            if(arr[a] > arr[n-b-1]){
                d+=arr[a];
                a++;
            }
            else{
                d+=arr[n-b-1];
                b++;
            }
        }

    }

      cout<<s<<"  "<<d;


}
