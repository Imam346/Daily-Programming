/*----------------------------------------
    author:  Imam
    created: 28.05.2025 14:47:54
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int n=int(s.size());
        if(s[0]!=s[n-1]){s[n-1]=s[0];}
        cout<<s<<'\n';
    }
    return 0;
}