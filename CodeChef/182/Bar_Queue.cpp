/*----------------------------------------
    author:  Imam
    created: 16.04.2025 20:37:31
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int b=0,g=0;
    for(char c:s){
        if(c=='B'){
            b++;
            if(b>(2*g)){break;}
        }
        else g++;
    }
    cout<<b+g<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}