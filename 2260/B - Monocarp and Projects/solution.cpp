#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;
 
        long long d = y - x;
        long long work = 0;
 
        while (k > 0 && x <= d)
        {
            work += d % x;
            x++;
            k--;
        }
        work += k * d;
 
        cout << work << endl;
    }
}