//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int x,n,m;
        cin>>x>>n>>m;

        for(int i=1;i<=n;i++){
            if(x<=10){break;}
            x = (x/2)+10;
        }
        for(int i=1;i<=m;i++) x-=10;

        if(x<=0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}