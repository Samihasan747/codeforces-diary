#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int n,l,u;
    cin>>n;
    int max = 0 , min = 0;
    vector<int> arr (n);
 
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
 
 
    for(int i=0; i<n ; i++)
    {
        if(arr[i] > arr[max])
            max = i;
        if(arr[i] <= arr[min])
                min = i;
    }
 
    if(max > min)
        u = max - 1;
    else
        u = max;
 
    l = n - min;
    cout<<u+l-1;
 
}
 