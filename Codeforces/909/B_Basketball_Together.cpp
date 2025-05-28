/*----------------------------------------
    author:  Imam
    created: 15.05.2025 21:25:48
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int n,d; cin>>n>>d;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    sort(ar.rbegin(),ar.rend());
    ll ans=0;
    int i=0,j=n-1;
    while(i<=j){
        ll cur=ar[i];
        if(cur<=d){
            while(i<j && cur<=d){
                cur+=ar[i];
                j--;
            }
        }
        if(cur>d) ans++;
        i++;
    }
    cout<<ans<<'\n';
}