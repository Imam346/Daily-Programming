#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    for(int i=0;i<n;i++){
      int x; cin>>x;
      string s; cin>>s;
      int d=count(s.begin(),s.end(),'D');
      int u=count(s.begin(),s.end(),'U');
    //   cout<<s<<" "<<d<<" "<<u<<endl;
      if(d==u){continue;}
      if(d>u){
        d-=u;
        //up koro
        while(d){
          if(ar[i]==9){
            ar[i]=0;
            d--;
            continue;
          }
          ar[i]++;
          d--;
        }
      }
      else{
        u-=d;
        //down koro
        while(u){
          if(ar[i]==0){
            ar[i]=9;
            u--;
            continue;
          }
          ar[i]--;
          u--;
        }
      }
    }
    for(auto val:ar) cout<<val<<" ";
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}