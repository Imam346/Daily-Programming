//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ar[n];
        for(int &i:ar) cin>>i;
        sort(ar,ar+n);

        int ans=INT_MAX;
        for(int i=0;i<n-1;i++){
            int x = abs(ar[i]-ar[i+1]);
            if(ans>x) ans=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}