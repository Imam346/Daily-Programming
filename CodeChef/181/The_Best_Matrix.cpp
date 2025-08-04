/*----------------------------------------
    author:  Imam
    created: 09.04.2025 22:07:03
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<pair<int,int>> dir = {{-1,1},{1,1},{-1,1},{-1,-1},{1,-1}};
inline void solve()
{
    ll n,m; cin>>n>>m;
    vector<vector<ll>> mat(n,vector<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    ll ans=n*m;
    ll cnt=1,mx=1;
    for(auto [x,y]:dir){
        vector<int> vec;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a = i*x+j*y;
                int val = mat[i][j]-a;
                vec.push_back(val);
            }
        }

        sort(vec.begin(),vec.end());
        for(int i=1;i<vec.size();i++){
            // cout<<cnt<<endl;
            if(vec[i]==vec[i-1]){
                cnt++;
                mx=max(mx,cnt);
            }
            else {cnt=1;}
        }
        // cout<<cnt<<" "<<mx<<endl;
        ans = min(ans,(n*m)-mx);
        cnt=mx=1;
    }

    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    ll t; cin>>t;
    while(t--) solve();
    return 0;
}