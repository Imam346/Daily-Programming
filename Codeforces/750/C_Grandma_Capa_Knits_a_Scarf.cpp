/*----------------------------------------
    author:  Imam
    created: 26.07.2025 15:01:02
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    int ans=INT_MAX;
    for(char c='a';c<='z';c++){
        int i=0,j=n-1,cnt=0;
        while(i<j){
            if(s[i]==s[j])i++,j--;
            else if(s[i]==c)i++,cnt++;
            else if(s[j]==c)j--,cnt++;
            else{cnt=INT_MAX;break;}
        }
        ans=min(ans,cnt);
    }
    cout<<(ans==INT_MAX?-1:ans)<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}
