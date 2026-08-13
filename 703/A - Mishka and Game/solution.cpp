#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a,b,m=0,c=0;
 
    while(n--)
    {
        cin>>a>>b;
 
        if(a > b)
            m++; 
        else if (a<b)
            c++;
            
    }
        if(m>c)
         cout<<"Mishka"<<endl;
        else if (m<c)
          cout<<"Chris"<<endl;
        else
          cout<<"Friendship is magic!^^"<<endl;
}