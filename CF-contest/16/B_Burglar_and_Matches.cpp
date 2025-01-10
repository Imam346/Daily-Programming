/*----------------------------------------
    author:  Imam
    created: 03.01.2025 23:44:33
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m,x,y;
    cin>>n>>m;
    vector<pair<int,int>> v;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        v.push_back({y,x});
    }
    sort(v.rbegin(),v.rend());
    long long ans=0;
    for(int i=0;i<m;i++){
        if(v[i].second<=n){
            ans+=(v[i].second*v[i].first);
            n-=v[i].second;
        }
        else{
            ans+=(n*v[i].first);
            break;
        }
    }
    cout<<ans<<'\n';
    return 0;
}