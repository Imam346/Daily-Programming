/*----------------------------------------
    author:  Imam
    created: 23.08.2025 00:58:19
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=uint64_t;

const int N=16;
vector<ll> digitsInGroup(N+1);
vector<ll> sumDigitsGroup(N+1);

// Sum of digits from 1 to n
inline ll sumOfDigits(ll n){
    if(n<10) return n*(n+1)/2;
    ll p=1;
    while(p*10<=n) p*=10;
    ll msd = n/p;
    ll rem = n%p;

    return msd*sumOfDigits(p-1) + (msd*(msd-1)/2)*p + msd*(rem+1) + sumOfDigits(rem);
}
// Sum of digits in [a, b]
inline ll sumDigitsRange(ll a, ll b){
    return sumOfDigits(b) - sumOfDigits(a-1);
}

inline void solve()
{
    ll k; cin>>k;
    ll ans=0;
    ll len=1;

    while(k>digitsInGroup[len]){
        ans+=sumDigitsGroup[len];
        k -= digitsInGroup[len];
        len++;
    }
    
    ll start=1;
    for(int i=1;i<len;i++) start*=10;

    ll full_num = k/len;
    if(full_num){
        ans += sumDigitsRange(start, start+full_num-1);
        k -= full_num*len;
        start += full_num;
    }
    // remaining few digits
    if(k){
        string s = to_string(start);
        for(int i=0;i<k;i++) ans+=s[i]-'0';
    }

    cout<<ans<<'\n';
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    // Precompute full group info for each length
    for(ll len=1;len<=N;len++){
        ll start=1,i=1;
        while(i<len){start*=10; i++;}
        ll cnt=9*start;
        digitsInGroup[len]=cnt*len;
        ll end=start*10-1;
        sumDigitsGroup[len]=sumDigitsRange(start, end);
    }

    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}