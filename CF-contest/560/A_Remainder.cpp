/*----------------------------------------
    author:  Imam
    created: 06.02.2025 16:52:39
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int n,x,y;
    cin>>n>>x>>y;
    string s; cin>>s;
    reverse(s.begin(),s.end());
    int ans=0;
    for(int i=0;i<x;i++){
        if(i==y){
            if(s[i]=='0')ans++;
            else s[i]='0';
        }
        if(s[i]=='1') ans++;
    }
    cout<<ans<<'\n';
    return 0;
}