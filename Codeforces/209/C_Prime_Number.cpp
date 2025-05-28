//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1000000007;

inline ll pw(ll a,ll b)//O(logb)
{
    //base case
    if(b==0) {return 1;}
    if(b%2==0){
        int p = pw(a,b/2);
        return (1LL * p * p % mod);
    }
    else{
        int p = pw(a,(b-1)/2);
        return (1LL * p * p %mod * a%mod);
    }
}
int main()
{
    ll n,x;
    cin>>n>>x; 
    ll sum = 0;
    vector<ll> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum += ar[i];
    }
    
    map<ll,int> cnt;
    for(int i=0;i<n;i++){
        cnt[sum-ar[i]]++;
    }
    ll cur = sum-ar[n-1];//minimum value
    while(cnt[cur]%x==0)
    {
        cnt[cur+1] += (cnt[cur]/x);
        cnt[cur]=0;
        cur++;
    }
    cout<<pw(x,min(sum,cur))<<'\n';
    return 0;
}