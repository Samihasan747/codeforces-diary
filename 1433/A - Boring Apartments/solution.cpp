#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
 
    int n,x;
    cin>>n;
    if(n == 1){
        cout<<1<<endl;
    }else if(n%1111 == 0){
        x=n/1111;
        cout<<10*x<<endl;
    }else if(n%111 == 0){
        x=n/111;
        cout<<10*(x-1)+6<<endl;
    }else if(n%11 == 0){
        x=n/11;
        cout<<10*(x-1)+3<<endl;
    }else{
        x=n/1;
        cout<<10*(x-1)+1<<endl;
    }
 
    }
}