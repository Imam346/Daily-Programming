/*----------------------------------------
    author:  Imam
    created: 23.08.2025 15:21:53
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=uint64_t;
inline void solve()
{
    ll n,m; cin>>n>>m;
    vector<pair<int,int>> vec;
    ll total_digits=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        string s = to_string(x);
        total_digits += (int)s.size();

        if(x%10==0){
            int num=x;
            int zero=0;
            while(num%10==0){
                zero++;
                num/=10;
            }
            vec.push_back({zero,x});
        }
    }

    sort(vec.rbegin(),vec.rend());
    
    ll removed=0;
    for(int i=0;i<(int)vec.size();i+=2){
        removed+=vec[i].first;// Anna removed zero at her turns
    }
    ll final_digits = total_digits-removed;

    if(final_digits>=(m+1)) cout<<"Sasha\n";
    else cout<<"Anna\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}