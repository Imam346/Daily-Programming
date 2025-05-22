/*----------------------------------------
    author:  Imam
    created: 16.04.2025 22:14:24
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int c = (x&1 && y&1)?(x+y)-1:x+y;
        int b = (x&1 && z&1)?(x+z)-1:x+z;
        int a = (z&1 && y&1)?(z+y)-1:z+y;
        cout<<min({a,b,c})<<'\n';
    }
    return 0;
}