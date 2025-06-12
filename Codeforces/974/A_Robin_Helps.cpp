//Don't disappoint me
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
        int n,k;
        cin>>n>>k;
        vector<int> ar(n);
        for(auto &i:ar) cin>>i;

        int ans=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]>=k)
                sum += ar[i];
            else if(ar[i]==0)
            {
                if(sum)
                {
                    ans++;
                    sum--;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}