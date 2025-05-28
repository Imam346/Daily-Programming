/*----------------------------------------
    author:  Imam
    created: 23.01.2025 11:10:27
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s; cin>>s;
    if(n==1 && k==1){cout<<0<<'\n';return 0;}
    if(k && s[0]!='1'){
        s[0]='1';
        k--;
    }
    for(int i=1;i<n;i++){
        if(k && s[i]!='0'){
            s[i]='0';
            k--;
        }
    }
    cout<<s<<'\n';
    return 0;
}