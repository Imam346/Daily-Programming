/*----------------------------------------
    author:  Imam
    created: 27.11.2024 23:02:15
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int q; cin>>q;
    while(q--)
    {
        ll n,k;
        cin>>n>>k;
        vector<int> ar(n);
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mn = min(mn,ar[i]);
            mx = max(mx,ar[i]);
        }

        if((mx>(2*k)+mn)) cout<<"-1"<<'\n';
        else cout<<(k+mn)<<'\n';
    }
    return 0;
}