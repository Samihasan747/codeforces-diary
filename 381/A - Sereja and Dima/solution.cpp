//Using List
 
#include<iostream>
#include<list>
using namespace std;
 
int main(){
 
    list<int> l;
    int s=0 , d=0;
 
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
 
    for(int i=0 ; !l.empty() ; i++)
    {
        if(i%2 == 0){
            if(l.front() > l.back()){
                d+=l.front();
                l.pop_front();
            }else{
                d+=l.back();
                l.pop_back();
            }
        }else{
             if(l.front() > l.back()){
                 s+=l.front();
                l.pop_front();
            }else{
                s+=l.back();
                l.pop_back();
            }
        }
    }
        
    cout<<d<<" "<<s<<endl;
 
}