#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr[n];
    int count=0;

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }


    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==j){
                break;
            }
            else if (arr[i] == arr[j]){
                count++;
                cout<<arr[i]<<count<<endl;
            }
        }
        cout<<"OK"<<endl;
    }


}
