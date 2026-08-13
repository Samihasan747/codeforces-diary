#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int p,q,r;
    if(a==1 || b==1 || c==1){
        p=(a+b)*c;
        q=a*(b+c);
        r=a+b+c;
 
        if(p>=q && p>=r)
            cout<<p<<endl;
        if(q>p && q>=r)
            cout<<q<<endl;
        if(r>p && r>q)
            cout<<r<<endl;
 
    }else{
        cout<<a*b*c<<endl;
    }
 
 
}