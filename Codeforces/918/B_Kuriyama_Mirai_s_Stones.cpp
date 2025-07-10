/*----------------------------------------
    author:  Imam
    created: 09.07.2025 16:37:59
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    vector<int> br=ar;
    sort(br.begin(),br.end());

    int len=sqrt(n);
    if(len*len<n)len++;
    vector<ll> block1(len), block2(len);
    for(int i=0;i<n;i++){
        block1[i/len]+=ar[i];
    }
    for(int i=0;i<n;i++){
        block2[i/len]+=br[i];
    }

    int m; cin>>m;
    while(m--){
        int t,l,r; cin>>t>>l>>r;
        l--,r--;
        ll sum=0;
        if(t==1){
            // Traverse left partial block
            while(l<=r && l%len!=0){sum+=ar[l++];}
            // Traverse full blocks
            while(l+len-1<=r){
                sum+=block1[l/len];
                l+=len;
            }
            // Traverse right partial block
            while(l<=r){sum+=ar[l++];}
        }
        else{
            // Traverse left partial block
            while(l<=r && l%len!=0){sum+=br[l++];}
            // Traverse full blocks
            while(l+len-1<=r){
                sum+=block2[l/len];
                l+=len;
            }
            // Traverse right partial block
            while(l<=r){sum+=br[l++];}
        }
        cout<<sum<<'\n';
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