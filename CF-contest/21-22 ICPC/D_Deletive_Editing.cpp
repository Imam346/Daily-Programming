/*----------------------------------------
    author:  Imam
    created: 07.05.2025 07:26:00
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    string a,b;
    cin>>a>>b;
    unordered_map<char,int>mp1,mp2;
    for(char c:a)mp1[c]++;
    for(char c:b)mp2[c]++;
    int j=0;
    for(int i=0;i<int(a.size());i++){
        if(a[i]==b[j]){
            // cout<<a[i]<<" "<<b[j]<<endl;
            int x=mp1[a[i]];
            int y=mp2[b[j]];
            if(y>x){cout<<"NO\n";return;}
            if(x>y) mp1[a[i]]--;
            else{
                mp1[a[i]]--;
                mp2[b[j]]--;
                j++;
                // cout<<"yes"<<endl;
            }
        }
        else mp1[a[i]]--;
    }
    cout<<(j==int(b.size())?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}