/*----------------------------------------
    author:  Imam
    created: 13.07.2025 18:45:39
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void Prime_factorization(int x, unordered_map<int,int>&mp){
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            while(x%i==0){
                mp[i]++;
                x/=i;
            }
        }
    }
    if(x>1)mp[x]++;
}
inline void solve()
{
    int n; cin>>n;
    unordered_map<int,int>mp;
    for(int x,i=0;i<n;i++){
        cin>>x;
        Prime_factorization(x,mp);
    }
    bool ok=true;
    for(auto &[x,y]:mp){
        if(y%n!=0){
            ok=false;
            break;
        }
    }

    cout<<(ok?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}