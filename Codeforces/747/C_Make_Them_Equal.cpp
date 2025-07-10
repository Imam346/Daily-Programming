/*----------------------------------------
    author:  Imam
    created: 10.07.2025 23:25:28
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n;
    char c;
    cin>>n>>c;
    string s; cin>>s;
    // Case 1: All characters are already c
    bool flag = all_of(s.begin(),s.end(),[&](char ch){return ch==c;});
    if(flag){cout<<0<<'\n';return;}
    // Case 2
    s='0'+s;
    int idx=-1;
    for(int i=n;i>=1;i--){
        if(s[i]==c){
            idx=i;
            break;
        }
    }
    bool ok=false;
    for(int i=idx+1;i<=n;i++){
        if(i%idx==0){
            ok=true;
            break;
        }
    }
    if(!ok){cout<<1<<'\n'<<idx<<'\n';return;}
    cout<<2<<'\n'<<n<<" "<<n-1<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}