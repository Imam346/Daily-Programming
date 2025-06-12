#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

inline void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    vector<int> vec(n);
    for(int i=1;i<n;i++)
        vec[i] = ar[i];
    vec.push_back(ar[0]);

    for(int i=1;i<=n;i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}
int main()
{
    Code_By_Imam
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
/*
p array-> 1 2 3 4 5
q array-> 2 3 4 5 1
          ...3 5
          .....6 9
          .......10 14

means that...
q array ke emon vabe sajao jate p array er ekta portion er sum
and q array er ekta portion er sum equal na hoy.
*/