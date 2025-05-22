/*----------------------------------------
    author:  Imam
    created: 01.12.2024 01:52:55
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin>>n;
    int ar[n];
    for(int &val:ar) cin>>val;
    sort(ar,ar+n);

    int ans=INT_MAX;
    ans = min(ans, abs(ar[0]-ar[n-1]));
    ans = min(ans, abs(ar[0]-ar[n-2]));
    ans = min(ans, abs(ar[1]-ar[n-1]));
    cout<<ans<<'\n';
    return 0;
}