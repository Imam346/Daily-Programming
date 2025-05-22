#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
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
        sort(ar.begin(),ar.end());

        int case1 = ar[n-3]-ar[0];
        int case2 = ar[n-2]-ar[1];
        int case3 = ar[n-1]-ar[2];

        int ans = min({case1,case2,case3});
        cout<<ans<<endl;
    }
    return 0;
}