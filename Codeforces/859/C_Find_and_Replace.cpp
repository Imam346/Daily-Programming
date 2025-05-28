/*----------------------------------------
    author:  Imam
    created: 17.03.2025 15:24:30
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

inline void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int ar[26];
    for(int i=0;i<26;i++){ar[i]=-1;}

    for(int i=0;i<n;i++){
        int x = s[i]-'a';
        int parity = i%2;

        if(ar[x]==-1){//Unassigned, assign to current parity
            ar[x]=parity;
        }
        else if(ar[x]!=parity){//Conflict with previous parity
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}