#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m,n;
    cin>>m>>n;
    long long k=ceil(m/2.0);



    if(n<=k){
        cout<<(2*n - 1);
    }
    else{
        cout<<2*(n-k);
    }


}
