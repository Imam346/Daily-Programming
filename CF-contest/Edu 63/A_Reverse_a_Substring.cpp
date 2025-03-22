/*----------------------------------------
    author:  Imam
    created: 22.03.2025 13:12:00
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);

    int n; cin>>n;
    string s; cin>>s;

    string tmp=s;
    sort(tmp.begin(),tmp.end());
    if(s==tmp){cout<<"NO\n";return 0;}
    for(int i=1;i<n;i++){
        if(s[i]<s[i-1]){
            cout<<"YES\n";
            cout<<i<<" "<<i+1<<'\n';
            return 0;
        }
    }
    return 0;
}