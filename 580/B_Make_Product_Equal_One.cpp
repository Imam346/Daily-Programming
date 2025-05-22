/*----------------------------------------
    author:  Imam
    created: 26.11.2024 15:45:34
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    ll n; cin>>n;
    vector<ll> pos,neg;
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        if(x>0) pos.push_back(x);
        else neg.push_back(x);
    }
    ll n1=pos.size(),n2=neg.size();
    ll neg_coin=0;
    sort(neg.begin(),neg.end());
    if(n2%2){
        for(ll i=0;i<n2-1;i++){
            if(neg[i]==0){neg_coin++;continue;}
            ll tmp = (-1 * neg[i]);
            neg_coin+=(tmp-1);
        }
        //last value
        neg_coin += ((-1*neg[n2-1])+1);
    }
    else{
        for(ll i=0;i<n2;i++){
            if(neg[i]==0){neg_coin++;continue;}
            ll tmp = (-1 * neg[i]);
            neg_coin+=(tmp-1);
        }
    }
    ll pos_coin=0;
    for(ll i=0;i<n1;i++)
        pos_coin+=(pos[i]-1);

    cout<<(pos_coin+neg_coin)<<'\n';
    return 0;
}