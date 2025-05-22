/*----------------------------------------
    author:  Imam
    created: 16.05.2025 14:41:22
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
inline void solve()
{
    string s; cin>>s;
    int n=s.size();
    int a1=-1,a2=-1,b1=-1,b2=-1,c1=-1,c2=-1,d1=-1,d2=-1;
    // 00
    for(int i=n-1;i>=0;i--){
        if(a1==-1 && s[i]=='0') a1=i;
        else if(a1!=-1 && s[i]=='0'){a2=i;break;}
    }
    //25
    for(int i=n-1;i>=0;i--){
        if(b1==-1 && s[i]=='5') b1=i;
        else if(b1!=-1 && s[i]=='2'){b2=i;break;}
    }
    //50
    for(int i=n-1;i>=0;i--){
        if(c1==-1 && s[i]=='0') c1=i;
        else if(c1!=-1 && s[i]=='5'){c2=i;break;}
    }
    //75
    for(int i=n-1;i>=0;i--){
        if(d1==-1 && s[i]=='5') d1=i;
        else if(d1!=-1 && s[i]=='7'){d2=i;break;}
    }

    ll a,b,c,d;
    a=b=c=d=INT_MAX;
    if(a2!=-1){a=a1-a2-1+(n-1)-a1;}
    if(b2!=-1){b=b1-b2-1+(n-1)-b1;}
    if(c2!=-1){c=c1-c2-1+(n-1)-c1;}
    if(d2!=-1){d=d1-d2-1+(n-1)-d1;}

    ll ans = min({a,b,c,d});
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
// lesson
// A number is divisible by 25
// if and only if its last two digits represent one of the following strings: "00", "25", "50", "75".