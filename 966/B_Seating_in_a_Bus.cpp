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
        int n;cin>>n;
        vector<bool> flag(n+2, false);
        vector<int> ar(n+1);
        for(int i=1;i<=n;i++) cin>>ar[i];

        bool ans = true;
        int val = ar[1];
        flag[val]=true;
        for(int i=2;i<=n;i++)
        {
            int val=ar[i];
            if(flag[val-1]==true || flag[val+1]==true)
                flag[val]=true;
            else 
            {
                ans = false;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}