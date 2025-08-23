/*----------------------------------------
    author:  Imam
    created: 13.08.2025 18:10:22
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;
inline void solve()
{
    string s; cin>>s;
    int n=s.size();
    int one = count(s.begin(),s.end(),'1');
    if(n==one){cout<<(ll)n*n<<'\n';return;}
    s+=s;
    int max1=0, cnt=0;
    for(char c:s){
        cnt=c=='1'?cnt+1:0;
        max1=max(max1,cnt);
    }
    ll a = (max1+1)/2;
    ll b = (max1+2)/2;
    cout<<a*b<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}