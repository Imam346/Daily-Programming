/*----------------------------------------
    author:  Imam
    created: 26.11.2024 16:58:17
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    string s; cin>>s;
    //prefix sum
    vector<ll> pref(n);
    pref[0]=ar[0];
    for(int i=1;i<n;i++)
        pref[i]=ar[i]+pref[i-1];
    //two pointer technique
    ll ans=0;
    int i=0,j=n-1;
    while(i<j){
        if(s[i]=='L' && s[j]=='R'){
            if(i==0) ans+=pref[j];
            else ans += (pref[j]-pref[i-1]);
            i++,j--;
        }
        else if(s[i]=='L')j--;
        else i++;
    }
    cout<<ans<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}