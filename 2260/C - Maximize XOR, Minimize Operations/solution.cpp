#include<bits/stdc++.h>
using namespace std;
int main(){
    int qrTNum;
    cin>>qrTNum;
    while(qrTNum--){
        int x,y;
        cin>>x>>y;
        int s=x+y;
        int a=0;
        bool tight=true;
        for(int i=30;i>=0;i--){
            int bs=(s>>i)&1;
            int bx=(x>>i)&1;
            if(tight){
                if(bs==1&&bx==1){
                    a|=(1<<i);
                } else if(bs==0&&bx==1){
                    tight=false;
                }
            } else {
                if(bs==1) a|=(1<<i);
            }
        }
        cout<<s<<" "<<x-a<<"
";
    }
}