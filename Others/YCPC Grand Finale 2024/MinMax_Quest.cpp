/*----------------------------------------
    author:  Imam
    created: 01.02.2025 15:46:41
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>& a, pair<int,int>& b)
{
    if(a.first != b.first) {return a.first<b.first;}
    return a.second>b.second;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    unordered_map<int,int>mp;
    while(t--){
        int x; cin>>x;
        if(x==1){
            int val; cin>>val;
            mp[val]++;
        }
        else{
            vector<pair<int,int>>vec;
            for(auto &[x,y]:mp){vec.push_back({y,x});}
            if(vec.empty()){cout<<"empty\n";continue;}
            sort(vec.begin(),vec.end(), cmp);
            cout<<vec[0].second<<'\n';
            if(vec.size()>1){
                if(vec[0].first==vec[1].first){
                    mp[vec[0].second] = max(1,vec[0].first/2);
                }
            }
        }
    }
    return 0;
}