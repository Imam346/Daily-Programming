/*----------------------------------------
    author:  Imam
    created: 19.07.2025 22:57:27
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline string binary(int n){
    string s="";
    while(n){
        if(n&1)s+='1';
        else s+='0';
        n/=2;
    }
    return s;
}
inline void solve()
{
    int n; cin>>n;
    if(n==2){cout<<0<<" "<<1<<'\n';return;}
    
    int mx=(binary(n-1)).size();
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        int cur=(binary(i)).size();
        if(cur<mx){
            idx=i;
            break;
        }
    }
    for(int i=n-1;i>=1;i--){
        if(i==idx)cout<<0<<" ";
        cout<<i<<" ";
    }
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}