/*----------------------------------------
    author:  Imam
    created: 12.08.2025 23:24:07
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;
inline void solve()
{
    int w,h; cin>>w>>h;
    vector<pair<ll,ll>> x1,x2,y1,y2;
    for(int i=1;i<=4;i++){
        int k; cin>>k;
        for(int j=1;j<=k;j++){
            int x; cin>>x;
            if(i==1) x1.push_back({x,0});
            else if(i==2) x2.push_back({x,h});
            else if(i==3) y1.push_back({0,x});
            else y2.push_back({w,x});
        }
    }

    ll area=0;
    { // base from x1
        auto [X1,Y1] = x1.front();
        auto [X2,Y2] = x1.back();
        for(auto [X3,Y3]:x2){
            ll mx = llabs(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
            area = max(area,mx);
        }
        for(auto [X3,Y3]:y1){
            ll mx = llabs(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
            area = max(area,mx);
        }
        for(auto [X3,Y3]:y2){
            ll mx = llabs(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
            area = max(area,mx);
        }
    }

    { // base from x2
        auto [X1,Y1] = x2.front();
        auto [X2,Y2] = x2.back();
        for(auto [X3,Y3]:x1){
            ll mx = llabs(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
            area = max(area,mx);
        }
        for(auto [X3,Y3]:y1){
            ll mx = llabs(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
            area = max(area,mx);
        }
        for(auto [X3,Y3]:y2){
            ll mx = llabs(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
            area = max(area,mx);
        }
    }

    { // base from y1
        auto [X1,Y1] = y1.front();
        auto [X2,Y2] = y1.back();
        for(auto [X3,Y3]:x1){
            ll mx = llabs(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
            area = max(area,mx);
        }
        for(auto [X3,Y3]:x2){
            ll mx = llabs(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
            area = max(area,mx);
        }
        for(auto [X3,Y3]:y2){
            ll mx = llabs(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
            area = max(area,mx);
        }
    }

    { // base from y2
        auto [X1,Y1] = y2.front();
        auto [X2,Y2] = y2.back();
        for(auto [X3,Y3]:x1){
            ll mx = llabs(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
            area = max(area,mx);
        }
        for(auto [X3,Y3]:x2){
            ll mx = llabs(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
            area = max(area,mx);
        }
        for(auto [X3,Y3]:y1){
            ll mx = llabs(X1*(Y2-Y3)+X2*(Y3-Y1)+X3*(Y1-Y2));
            area = max(area,mx);
        }
    }

    cout<<area<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}