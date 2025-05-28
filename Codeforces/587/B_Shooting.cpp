/*----------------------------------------
    author:  Imam
    created: 26.11.2024 00:07:19
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n; cin>>n;
    vector<pair<int,int>> vec;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        vec.push_back({x,i});
    }
    sort(vec.rbegin(),vec.rend());

    ll nock=0,x=0;
    for(int i=0;i<n;i++){
        nock += (vec[i].first*x+1);
        x++;
    }
    cout<<nock<<'\n';
    for(int i=0;i<n;i++) cout<<vec[i].second<<" ";
    return 0;
}