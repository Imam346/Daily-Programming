/*----------------------------------------
    author:  Imam
    created: 04.03.2025 12:24:48
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        b<<=1;
        // cout<<b<<endl;
        if(((b-c)%a==0 && b>c) || ((b-a)%c==0 && a<b) || (a+c)%b==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}