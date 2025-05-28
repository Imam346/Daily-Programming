/*----------------------------------------
    author:  Imam
    created: 24.11.2024 16:35:21
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;
    sort(ar.begin(),ar.end());
    ll sum1=0,sum2=0;
    for(int i=0;i<(n/2);i++) sum1+=ar[i];
    for(int i=n/2;i<n;i++) sum2+=ar[i];

    cout<<(sum1*sum1)+(sum2*sum2)<<'\n';
    return 0;
}