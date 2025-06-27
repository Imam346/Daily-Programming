/*----------------------------------------
    author:  Imam
    created: 27.06.2025 14:37:00
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    ll n,m; cin>>n>>m;
    vector<int> ar(m);
    for(auto &i:ar) cin>>i;

    sort(ar.begin(),ar.end());

    vector<int> gaps;
    ll x=ar[0]-1+n-ar[m-1];
    gaps.push_back(x);
    for(int i=1;i<m;i++){
        x=ar[i]-ar[i-1]-1;
        gaps.push_back(x);
    }

    sort(gaps.rbegin(),gaps.rend());
    
    ll days=0, safe=0;
    for(auto gap:gaps){
        ll remaining = gap-2*days;
        if(remaining<=0){break;}
        if(remaining==1){safe++;break;}
        else{
            safe+=(remaining-1);
            days+=2;
        }
    }
    cout<<n-safe<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}