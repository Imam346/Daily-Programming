/*----------------------------------------
    author:  Imam
    created: 01.12.2024 22:38:19
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin>>n;
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        mp[x]++;
    }

    vector<int> increasing,decreasing;
    for(auto &[x,y]:mp){
        if(y>2){cout<<"NO\n";return 0;}
        if(y==2){
            increasing.push_back(x);
            decreasing.push_back(x);
        }
        else decreasing.push_back(x);
    }

    sort(increasing.begin(),increasing.end());
    sort(decreasing.begin(),decreasing.end(),greater<int>());
    cout<<"YES\n";
    cout<<increasing.size()<<'\n';
    for(auto val:increasing) cout<<val<<" ";
    cout<<'\n';
    cout<<decreasing.size()<<'\n';
    for(auto val:decreasing) cout<<val<<" ";
    cout<<'\n';
    return 0;
}