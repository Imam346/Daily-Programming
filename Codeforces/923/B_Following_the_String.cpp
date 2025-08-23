/*----------------------------------------
    author:  Imam
    created: 03.08.2025 13:00:57
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    map<char,int>mp;
    char c='a';
    for(int i=0;i<n;i++){
        if(ar[i]==0){
            cout<<c;
            mp[c]++;
            c++;
        }
        else{
            for(auto [x,y]:mp){
                if(y==ar[i]){
                    cout<<x;
                    mp[x]++;
                    break;
                }
            }
        }
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