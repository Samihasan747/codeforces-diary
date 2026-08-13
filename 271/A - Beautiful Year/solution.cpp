#include<bits/stdc++.h>
using namespace std;
 
bool allUnique(int year){
    int arr[4];
    for(int i=0 ; i<4 ; i++){
        arr[i] = year%10;
        year /= 10;
    }
    sort(arr,arr+4);
        for(int i=0 ; i<3 ; i++){
        if(arr[i] == arr[i+1])
            return false;
    }
    return true;
}
 
int main()
{
    int year;
    cin>>year;
 
    do{
        year++;
    }while(!allUnique(year));
 
    cout<<year;
}