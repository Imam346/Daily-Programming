/*----------------------------------------
    author:  Imam
    created: 02.02.2025 20:44:40
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    set<int>a,b;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        a.insert(x);
    }
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        b.insert(x);
    }
    if(a.size()==1 && b.size()==1) cout<<"NO\n";
    else if((a.size()==2 && b.size()==1) || (a.size()==1 && b.size()==2)) cout<<"NO\n";
    else cout<<"YES\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}