/*----------------------------------------
    author:  Imam
    created: 28.08.2025 21:44:13
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,k; cin>>n>>k;
    string s; cin>>s;

    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            int cnt=0;
            while(i<n && s[i]=='1'){i++;cnt++;}
            if(cnt>=k){cout<<"NO\n";return;}
        }
    }

    int cnt=count(s.begin(),s.end(),'1');
    int cur1=1, cur2=cnt+1;
    vector<int> ans;
    for(auto c:s){
        if(c=='1')ans.push_back(cur1++);
        else ans.push_back(cur2++);
    }
    cout<<"YES\n";
    for(auto val:ans) cout<<val<<" ";
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