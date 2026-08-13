#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n%2 == 0){
        cout<<"Not Prime";
        return 0;
    }
    if(n==3){
        cout<<"Prime";
        return 0;
    }

    for(int i=3 ; i<n ; i+=2){
        if(n%i == 0){
            cout<<"Not Prime";
            return 0;
        }
    }
    cout<<"Prime";
}
