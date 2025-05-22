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
        int n; cin>>n;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;

        if(n==1 || n==2)
        {
            cout<<-1<<'\n';
            continue;
        }

        // sort(ar.begin(),ar.end());
        const ll sum = accumulate(ar.begin(),ar.end(),0LL);
        
        ll l=0, r=1e12;
        ll ans=-1;
        while(l<=r)
        {
            const ll mid = (l+r)>>1;
            const ll new_sum = sum+mid;
            const ll avg = (new_sum+n-1)/n;//taken ceil average
            const ll half = (avg+2-1)/2; // half of average, celling

            ll cnt=0;
            const ll need = (n/2)+1;//Need more than half to be unhappy
            for(int i=0;i<n;i++)
            {
                if(ar[i]<half)
                    cnt++;
                if(cnt>=need) break;
            }

            if(cnt>=need)
            {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}