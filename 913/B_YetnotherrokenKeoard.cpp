/*----------------------------------------
    author:  Imam
    created: 24.04.2025 08:05:02
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);

    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        multiset<char>B,b;
        int n=s.size();
        string ans="";
        for(int i=n-1;i>=0;i--){
            if(s[i]=='b')b.insert('b');
            else if(s[i]=='B')B.insert('B');
            else{
                if(islower(s[i])){
                    if(b.empty())ans+=s[i];
                    else b.erase(b.find('b'));
                }
                else{
                    if(B.empty())ans+=s[i];
                    else B.erase(B.find('B'));
                }
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';
    }
    return 0;
}