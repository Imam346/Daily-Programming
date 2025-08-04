/*----------------------------------------
    author:  Imam
    created: 01.02.2025 12:43:26
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
    map<char,int>mp;
    for(char &c:s){mp[c]++;}
    int cnt=0;
    for(auto &[x,y]:mp){
        if(y%2) cnt++;
    }
    if((cnt-1)<=k){cout<<"YES\n";}
    else {cout<<"NO\n";}
    return 0;
}