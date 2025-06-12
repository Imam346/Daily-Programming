/*----------------------------------------
    author:  Imam
    created: 10.04.2025 01:46:33
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int x,k; cin>>x>>k;
    if(x==1 && k==1){cout<<"NO\n";return;}
    if(x>9 && k>1){cout<<"NO\n";return;}

    if(x>=1 && x<=9){
        string s="";
        for(int i=1;i<=k;i++){
            s+=to_string(x);
        }
        x=stoi(s);
    }
    bool flag=true;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            flag=false;
            break;
        }
    }
    cout<<(flag?"YES\n":"NO\n");
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--)solve();
    return 0;
}