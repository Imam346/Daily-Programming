/*----------------------------------------
    author:  Imam
    created: 26.08.2025 20:03:35
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int one,two,three,four,five;
    one=two=three=four=five=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char c; cin>>c;
            if(c=='X'){
                if(i==0 || j==0 || i==9 || j==9) one++;
                else if(i==1 || j==1 || i==8 || j==8) two++;
                else if(i==2 || j==2 || i==7 || j==7) three++;
                else if(i==3 || j==3 || i==6 || j==6) four++;
                else if(i==4 || j==4 || i==5 || j==5) five++;
            }
        }
    }

    int ans = one*1 + two*2 + three*3 + four*4 + five*5;
    cout<<ans<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}
