/*----------------------------------------
    author:  Imam
    created: 17.04.2025 00:03:19
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    string p; cin>>p;
    string s; cin>>s;
    int n=p.size(),m=s.size();
    int i=0,j=0;
    while(i<n){
        if(p[i]!=s[j]){cout<<"NO\n";return;}
        int cnt1=0;
        char c1=p[i];
        while(i<n && c1==p[i]){cnt1++;i++;}
        int cnt2=0;
        char c2=s[j];
        while(j<m && c2==s[j]){cnt2++;j++;}

        if(cnt2<cnt1 || cnt2>(2*cnt1)){
            cout<<"NO\n";
            return;
        }
    }
    // LRLR
    // LRLRLL
    if(j!=m)cout<<"NO\n"; 
    else cout<<"YES\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}