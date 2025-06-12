/*----------------------------------------
    author:  Imam
    created: 08.06.2025 20:40:20
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,x; cin>>n>>x;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(ar[i]==1){
            while(i<n && x){i++,x--;}
            while(i<n){
                if(ar[i]==1){
                    flag=false;
                    break;
                }
                i++;
            }
            break;
        }
    }
    
    cout<<(flag?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}