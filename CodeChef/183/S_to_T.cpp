/*----------------------------------------
    author:  Imam
    created: 23.04.2025 21:13:02
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline bool fun(int idx,string &s,vector<int>&ans){
    vector<int>vec;
    while(idx>0 && s[idx]!='1'){
        vec.push_back(idx-1);
        --idx;
    }
    if(s[idx]=='1'){
        for(int i=vec.size()-1;i>=0;i--){
            ans.push_back(vec[i]);
            s[vec[i]+1]='1';
        }
        return true;
    }
    return false;
}
inline void solve()
{
    int n; cin>>n;
    string s,t;
    cin>>s>>t;
    if(s[0]!=t[0]){cout<<-1<<'\n';return;}

    vector<int> ans;
    bool flag=false;
    for(int i=n-1;i>0;i--){
        if(s[i]!=t[i]){
            if(fun(i-1,s,ans)){
               ans.push_back(i-1);
               if(s[i]=='0') s[i]='1';
               else s[i]='0';
            }
            else{flag=true;break;}
        }
    }

    if(flag){cout<<-1<<'\n';return;}
    cout<<ans.size()<<'\n';
    for(auto val:ans) cout<<val+1<<" ";
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}