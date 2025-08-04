/*----------------------------------------
    author:  Imam
    created: 01.08.2025 21:20:14
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;
inline void solve()
{
    int n; cin>>n;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;

    priority_queue<int,vector<int>,greater<int>>mn;
    priority_queue<int>mx;
    for(int i=0;i<n;i++){
        ll x=ar[i]%10;
        if(mx.empty() || x<=mx.top()) mx.push(x);
        else mn.push(x);

        if(mx.size()<mn.size()){
            mx.push(mn.top());
            mn.pop();
        }
        else if(mx.size()>mn.size()+1){
            mn.push(mx.top());
            mx.pop();
        }
        cout<<mx.top()<<" ";
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
//https://www.hackerrank.com/contests/ycpc-beginners-round-2k25/challenges