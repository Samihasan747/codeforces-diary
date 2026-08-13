#include<bits/stdc++.h>
using namespace std;
 
int check47(int n)
{
    int arr[1000];
    int i=0,count=0;
    while(n>0)
    {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }
    int s = sizeof(arr)/sizeof(arr[0]);
 
    for(int j=0 ; j<s ; j++)
    {
        if(arr[j] == 7 && arr[j+1]== 4)
            count++;
    }
 
    if(count > 0)
        return 1;
    else
        return 0;
 
};
 
int checkLucky(int n)
{
    if(n%4 == 0 || n%7 == 0 || n%47 == 0)
        return 1;
    else
        return 0;
};
 
int main()
{
    int n;
    cin>>n;
 
    if(check47(n) + checkLucky(n) > 0)
        cout<<"YES";
    else
        cout<<"NO";
}