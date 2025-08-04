/*----------------------------------------
    author:  Imam
    created: 04.08.2025 11:29:59
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    //corner case
    if(n==1 && s[0]=='0'){cout<<1<<'\n';return;}
    
    int zero=0,one=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            zero++;
            while(i<n && s[i]=='0')i++;
            i--;
        }
        else{
            one++;
            while(i<n && s[i]=='1')i++;
            i--;
        }
    }

    // cout<<zero<<" "<<one<<'\n';
    if(zero>one)cout<<2<<'\n';
    else if(zero==one)cout<<1<<'\n';
    else cout<<0<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}