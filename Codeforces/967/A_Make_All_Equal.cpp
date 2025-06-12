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
        multiset<int> s;
        for(int i=1;i<=n;i++)
        {
            int x; cin>>x;
            s.insert(x);
        }
        int mx = INT_MIN;
        for(auto it=s.begin();it!=s.end();it++)
        {
            int val = s.count(*it);
            mx = max(mx,val);
        }
        cout<<n-mx<<endl;
    }
    return 0;
}