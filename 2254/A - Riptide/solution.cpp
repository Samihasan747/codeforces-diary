#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z,countt=0;
        cin>>x>>y>>z;
 
        if(x == y || y == z || x == z){
                cout<<countt<<endl;
        }else{
 
            while(x != y && y != z && x != z){
                int maxx = max({x,y,z});
                int minn = min({x,y,z});
 
                if(x == maxx && y == minn){
                    x--;
                    y++;
                    countt++;
                }
                if(x == maxx && z == minn){
                    x--;
                    z++;
                    countt++;
                }
                if(y == maxx && x == minn){
                    y--;
                    x++;
                    countt++;
                }
                if(y == maxx && z == minn){
                    y--;
                    z++;
                    countt++;
                }
                if(z == maxx && x == minn){
                    z--;
                    x++;
                    countt++;
                }
                if(z == maxx && y == minn){
                    z--;
                    y++;
                    countt++;
                }
            }
 
        cout<<countt<<endl;
        }
 
    }
}