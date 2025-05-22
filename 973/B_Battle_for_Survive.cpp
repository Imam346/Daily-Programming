#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for(auto &i:ar) cin>>i;

        ll ans = ar[n-2];
        for(int i=n-3;i>=0;i--)
            ans -= ar[i];
        cout<<(ar[n-1]-ans)<<'\n';
    }
    return 0;
}