//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,k,q;
    cin>>n>>k>>q;
    
    int mn=INT_MAX,mx=INT_MIN;
    for(int i=1;i<=n;i++){
        int l,r;
        cin>>l>>r;
        mn = min(mn,l);
        mx = max(mx,r);
    }
    
    int mn2=0,mx2=0;
    bool flag=true;
    while(q--){
        int a,b; cin>>a>>b;

        if(a<mn) {a=mn;}
        if(b>mx) {b=mx;}
        //for the first iteration
        if(flag){
            cout<<(b-a)+1<<'\n';
            mn2 = min(mn2,a);
            mx2 = max(mx2,b);
            flag=false;
            continue;
        }

        if(a>=mn2 && b<=mx2){cout<<0<<'\n';continue;}
        if(a>=mn2){
            a = max(mx2,a)+1;
            cout<<(b-a)+1<<'\n';
            mn2 = min(mn2,a);
            mx2 = max(mx2,b);
        }
        else if(a<mn2 && b<=mx2){
            b = min(mn2,b)-1;
            cout<<(b-a)+1<<'\n';
            mn2 = min(mn2,a);
            mx2 = max(mx2,b);
        }
        else{
            int tmp1 = (b-a)+1;
            int tmp2 = (mx2-mn2)+1;
            cout<<(tmp1-tmp2)<<'\n';
            mn2 = min(mn2,a);
            mx2 = max(mx2,b);
        }
    }
    return 0;
}