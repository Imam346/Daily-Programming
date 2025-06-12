/*----------------------------------------
    author:  Imam
    created: 22.05.2025 16:44:39
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,q; cin>>n>>q;
    vector<int> ar(n),qy(q);
    for(auto &i:ar) cin>>i;
    for(auto &i:qy) cin>>i;

    set<int> s;
    for(auto x:qy){//O(30)
        if(s.count(x)){continue;}
        int p = 1<<x;
        int add = 1<<(x-1);
        for(int i=0;i<n;i++){//O(N)
            if(ar[i]%p==0){
                ar[i]+=add;
            }
        }
        s.insert(x);
    }

    for(auto val:ar) cout<<val<<" ";
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