/*----------------------------------------
    author:  Imam
    created: 06.12.2024 11:10:19
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        // int n; cin>>n;
        // long long x=(n/2)+1;
        // long long ans=0;
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n;j++){
        //         ans += abs((i-x)+(j-x));
        //     }
        // }
        // cout<<ans<<'\n';

        ll n; cin>>n;
        ll m = n/2;
        //sum of square formula, n = (n*(n+1)*(2n+1))/6
        ll sum = (m*(m+1)*((2*m)+1))/6;
        cout<<8*sum<<'\n';
    }
    return 0;
}