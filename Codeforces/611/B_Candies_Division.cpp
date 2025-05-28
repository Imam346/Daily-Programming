/*----------------------------------------
    author:  Imam
    created: 24.11.2024 14:49:30
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int t; cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a = n%k?(n/k)+1:(n/k);
        ll b = (n/k);
        ll ans = (a*(k/2) )+ (b*(k-(k/2)));
        if(ans>n){cout<<n<<'\n';continue;}
        cout<<ans<<'\n';
    }
    return 0;
}