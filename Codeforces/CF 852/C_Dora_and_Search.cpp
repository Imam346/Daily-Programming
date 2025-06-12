/*----------------------------------------
    author:  Imam
    created: 30.05.2025 14:40:17
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    int i=0,j=n-1, mn=1,mx=n;
    int l=-1,r=-1;
    while(i<=j){
        if(ar[i]!=mn && ar[i]!=mx && ar[j]!=mn && ar[j]!=mx){
            l=i,r=j;
            break;
        }
        if(ar[i]==mn){i++,mn++;}
        else if(ar[i]==mx){i++,mx--;}
        else if(ar[j]==mn){j--,mn++;}
        else if(ar[j]==mx){j--,mx--;}
    }
    if(i<=j) cout<<i+1<<" "<<j+1<<'\n';
    else cout<<-1<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}