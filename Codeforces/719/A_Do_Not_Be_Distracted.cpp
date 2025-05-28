/*----------------------------------------
    author:  Imam
    created: 21.02.2025 09:46:17
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    int freq[26]={0};
    bool ok=true;
    char cur=s[0];
    freq[cur-'A']++;
    for(int i=1;i<n;i++){
        if(cur!=s[i]){
            if(freq[s[i]-'A']){
                ok=false;
                break;
            }
            else {freq[s[i]-'A']++; cur=s[i];}
        }
    }
    cout<<(ok?"YES\n":"NO\n");
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}