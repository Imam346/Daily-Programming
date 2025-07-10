/*----------------------------------------
    author:  Imam
    created: 30.06.2025 00:58:16
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct CompareByIndex{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const{
        return a.first < b.first;
    }
};

inline void solve()
{
    int n,q; cin>>n>>q;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    ll sum = accumulate(ar.begin(),ar.end(),0LL);
    set<pair<int,int>,CompareByIndex> st;
    ll cur = -1;
    while(q--){
        int x; cin>>x;
        if(x==1){
            int idx,val; cin>>idx>>val;
            if(cur==-1){
                sum-=ar[idx-1];
                sum+=val;
                ar[idx-1]=val;
                cout<<sum<<'\n';
            }
            else{
                // Search using only the index
                auto it = st.lower_bound({idx,0});
                if(it!=st.end() && it->first==idx){
                    sum-=it->second;
                    sum+=val;
                    st.erase({idx,it->second});
                    st.emplace(idx, val);
                    cout<<sum<<'\n';
                }
                else{
                    sum-=cur;
                    sum+=val;
                    st.emplace(idx, val);
                    cout<<sum<<'\n';
                }
            }
        }
        else{
            ll val; cin>>val;
            sum = n*val;
            cur = val;
            st.clear();
            cout<<sum<<'\n';
        }
    }    
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; //cin>>t;
    while(t--) solve();
    return 0;
}