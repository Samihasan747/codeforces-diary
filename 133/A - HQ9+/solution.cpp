#include<iostream>
using namespace std;
 
int main(){
 
    string s;
    cin>>s;
 
    for(int i:s){
        if((i=='H' || i=='Q' || i=='9' ) && (i>=33 && i<=126)){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
 
 
}