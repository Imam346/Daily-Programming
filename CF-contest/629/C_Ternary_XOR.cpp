/*----------------------------------------
    author:  Imam
    created: 06.02.2025 17:49:09
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    string a,b;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(flag && s[i]=='1'){
            a.push_back('1');
            b.push_back('0');
            flag=false;
            continue;
        }
        if(flag){
            if(s[i]=='2'){
                a.push_back('1');
                b.push_back('1');
            }
            else{
                a.push_back('0');
                b.push_back('0');
            }
        }
        else{
            a.push_back('0');
            b.push_back(s[i]);
        }
    }
    cout<<a<<'\n'<<b<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}