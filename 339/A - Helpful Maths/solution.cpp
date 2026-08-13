#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char arr[1000];
 
    gets(arr);
    sort(arr,arr+strlen(arr));
 
    for(int i=0 ; i<strlen(arr)-1 ; i++)
    {
        if(arr[i]>='1' && arr[i]<='9')
            cout<<arr[i]<<"+";
    }
    cout<<arr[strlen(arr)-1];
 
}