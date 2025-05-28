/*----------------------------------------
    author:  Imam
    created: 16.03.2025 23:49:03
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int n; cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int c = sqrt((i*i)+(j*j));
            if(c<=n && (c*c)==(i*i+j*j)) ans++;
        }
    }
    cout<<ans<<'\n';
    return 0;
}