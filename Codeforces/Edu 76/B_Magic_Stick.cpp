/*----------------------------------------
    author:  Imam
    created: 21.01.2025 14:09:36
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;

        if(x>3){cout<<"YES\n";continue;}
        if(x==1 && y==1){cout<<"YES"<<endl;continue;}
        if((x==2||x==3) && y<4){cout<<"YES\n";}
        else cout<<"NO\n";
    }
    return 0;
}