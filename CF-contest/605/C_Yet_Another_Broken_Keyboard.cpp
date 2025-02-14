/*----------------------------------------
    author:  Imam
    created: 14.02.2025 13:00:58
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int n,k; cin>>n>>k;
    string s; cin>>s;
    cin.ignore();
    string sk; 
    getline(cin,sk);
    unordered_map<char,int>mp;
    for(auto &c:sk)
        if(isalpha(c)) mp[c]++;

    long long ans=0;
    for(int i=0;i<n;i++){
        long long cnt=0;
        if(mp.count(s[i])){
            while(i<n && mp.count(s[i])){
                i++;
                cnt++;
            }
        }
        ans+=((cnt*(cnt+1))/2);// count number of substring using n*(n+1)/2 formula
    }
    cout<<ans<<'\n';
    return 0;
}