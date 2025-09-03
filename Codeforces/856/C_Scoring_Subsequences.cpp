/*----------------------------------------
    author:  Imam
    created: 03.09.2025 12:35:48
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    queue<int> q;
    vector<int> ans;
    int komche=0;
    for(int i=0;i<n;i++){
        q.push(ar[i]);
        int d=i+1, cnt=0;
        d-=komche;
        while(!q.empty() && q.front()<d){
            q.pop();
            d--;
            cnt++;
        }
        komche+=cnt;
        ans.push_back(d);
    }
    for(auto val:ans) cout<<val<<" ";
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
