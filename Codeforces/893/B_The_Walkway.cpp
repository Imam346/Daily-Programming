/*----------------------------------------
    author:  Imam
    created: 24.06.2025 17:58:07
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
inline void solve()
{
    ll n,m,d;
    cin>>n>>m>>d;
    vector<ll> ar(m);
    for(auto &i:ar) cin>>i;

    ll sum=m;
    for(int i=0;i<m-1;i++){
        ll cur=ar[i];
        ll next=ar[i+1];
        sum+=(next-cur-1)/d;
    }
    if(ar[0]!=1){
        sum++;//Petya has not yet eaten a cookie (means 1 number seller)
        sum+=(ar[0]-2)/d;
    }
    sum+=(n-ar[m-1])/d;

    vector<int> con(m);
    ll ans=INT_MAX;
    for(int i=1;i<m-1;i++){
        ll prev=ar[i-1];
        ll cur =ar[i];
        ll next=ar[i+1];

        ll tmp=sum;
        tmp-=(cur-prev-1)/d;
        tmp-=(next-cur-1)/d;
        tmp--;//remove i-th cookie seller
        tmp+=(next-prev-1)/d;
        ans=min(ans,tmp);
        con[i]=tmp;
    }
    //remove 0-th cookie seller
    ll tmp=sum;
    if(ar[0]!=1){
        tmp--;//remove the first seller (means 1)
        tmp-=(ar[0]-2)/d;
    }
    tmp--;//remove 0-th seller
    tmp-=(ar[1]-ar[0]-1)/d;
    tmp+=(ar[1]-2)/d;
    tmp++;//add 1 number seller
    ans=min(ans,tmp);
    con[0]=tmp;
    //remove m-th cookie seller
    sum-=(n-ar[m-1])/d;
    sum--;//remove m-the seller
    sum-=(ar[m-1]-ar[m-2]-1)/d;
    sum+=(n-ar[m-2])/d;
    ans=min(ans,sum);
    con[m-1]=sum;
    
    int cnt=0;
    for(int val:con)if(val==ans)cnt++;
    cout<<ans<<" "<<cnt<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}