#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int maxsum=0;
    for(int i=1 ; i<=10e4 ; i++){
        sum+=i;
        maxsum+=sum;
        if(maxsum > n){
            cout<<i-1;
            return 0;
        }
    }
 
}