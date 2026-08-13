#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string arr;
    int count4=0,count7=0;
    cin>>arr;
 
    for(int i=0 ; i<arr.size() ; i++)
    {
        if(arr[i] == '4')
        {
            count4++;
        }
        if(arr[i] == '7')
        {
            count7++;
        }
    }
 
    if(count4+count7 == 7 || count4+count7 == 4)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
 
 
}