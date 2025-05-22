/*----------------------------------------
    author:  Imam
    created: 28.02.2025 23:34:10
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
inline void solve()
{
    int n; cin>>n;
    vector<int> odd,even;
    for(int i=1;i<=n;i++){
        if(i%2) odd.push_back(i);
        else even.push_back(i);
    }
    if(n==1){cout<<-1<<'\n';return;}
    vector<int> ans;
    bool flag=true;
    ll x = 0,tmp,a, i=0,j=0;
    while(i<even.size() && j<odd.size()){
        if(flag){
            tmp = even[i]+x;
            a = sqrt(tmp);
            if((a*a)!=tmp) {x+=even[i]; ans.push_back(even[i++]);}
            else {x+=odd[j]; ans.push_back(odd[j++]);}
            flag=false;
        }
        else{
            tmp = odd[j]+x;
            a = sqrt(tmp);
            if((a*a)!=tmp){x+=odd[j]; ans.push_back(odd[j++]);}
            else{x+=even[i]; ans.push_back(even[i++]);}
            flag=true;
        }
    }
    while(i<even.size()){ans.push_back(even[i++]);}
    while(j<odd.size()){ans.push_back(odd[j++]);}

    ll sum = accumulate(ans.begin(),ans.end(),0LL);
    a = sqrt(sum);
    if((a*a)==sum) {cout<<-1<<'\n';return;}
    for(auto &val:ans) cout<<val<<" ";
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