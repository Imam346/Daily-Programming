/*----------------------------------------
    author:  Imam
    created: 02.01.2025 21:16:14
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n=s.size();
        int ans=0,prev=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                ans=max(ans,(i+1)-prev);
                prev=(i+1);
            }
        }
        ans=max(ans,n+1-prev);
        cout<<ans<<'\n';
    }
    return 0;
}