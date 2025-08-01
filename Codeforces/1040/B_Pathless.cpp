/*----------------------------------------
    author:  Imam
    created: 31.07.2025 21:06:40
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n,s; cin>>n>>s;
    vector<int> ar(n);
    int zero=0,one=0,two=0,total_sum=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        total_sum+=ar[i];
        if(ar[i]==0)zero++;
        else if(ar[i]==1)one++;
        else two++;
    }

    if(s<total_sum){
        sort(ar.begin(),ar.end());
        for(auto val:ar)cout<<val<<" ";
        cout<<'\n';
        return;
    }
    if(s==total_sum+1){
        for(int i=1;i<=zero;i++)cout<<0<<" ";
        for(int i=1;i<=two;i++)cout<<2<<" ";
        for(int i=1;i<=one;i++)cout<<1<<" ";
        cout<<'\n';
        return;
    }
    cout<<-1<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}