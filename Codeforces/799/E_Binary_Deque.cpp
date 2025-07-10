/*----------------------------------------
    author:  Imam
    created: 27.06.2025 22:48:51
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,s; cin>>n>>s;
    int ar[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum+=ar[i];
    }

    if(sum<s){cout<<-1<<'\n';return;}
    if(sum==s){cout<<0<<'\n';return;}

    int mx = 0;
    for(int i=0,j=0;j<n;j++){
        s-=ar[j];
        while(s<0){s+=ar[i++];}
        if(s==0){
            mx=max(mx,j-i+1);
        }
    }
    cout<<n-mx<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}