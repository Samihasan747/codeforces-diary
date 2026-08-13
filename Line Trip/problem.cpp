#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
    int n,x;
    int maxdiff = 0;
    int result = 0;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    for(int i=0 ; i<n-1 ; i++){
        if(arr[i+1] - arr[i] > maxdiff){
            maxdiff = arr[i+1] - arr[i];
        }
    }
        if(maxdiff <= 2*(x - arr[n-1])){
            result = 2*(x - arr[n-1]);
        }else{
            result = maxdiff;
        }
    if(n == 1){
        result = arr[0];
    }

        cout<<2*result <<endl;
    }
}
