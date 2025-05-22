/*----------------------------------------
    author:  Imam
    created: 04.12.2024 18:33:16
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

inline void solve()
{
    ll l,r;
    cin>>l>>r;
    ll sum_r = (r*(r+1))/2;//sum of 1 to R
    ll sum_l = ((l-1)*l)/2;//sum of 1 to L-1

    //L to R odd sum
    ll fastOdd = l%2==0?l+1:l;
    ll lastOdd = r%2==0?r-1:r;
    ll n = (lastOdd-fastOdd)/2+1;
    ll oddSum = (n*(fastOdd+lastOdd))/2;
    
    //L to R total sum
    ll sum = sum_r-sum_l;
    // cout<<sum<<endl;
    ll evenSum = sum-oddSum;
    
    cout<<evenSum-oddSum<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int t; cin>>t;
    while(t--)solve();
    return 0;
}