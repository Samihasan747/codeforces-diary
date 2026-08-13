#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0],count=0;

    for(int i=0 ; i<n ; i++){
        for(int j=1 ; j<=i ; j++){
            if(arr[j] > max){
                max = arr[j];
                count++;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=1 ; j<=i ; j++){
            if(arr[j] < min){
                min = arr[j];
                count++;
            }
        }
    }

        cout<<count<<endl;
}
