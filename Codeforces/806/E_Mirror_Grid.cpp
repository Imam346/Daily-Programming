/*----------------------------------------
    author:  Imam
    created: 27.06.2025 22:03:45
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    char a[n][n], b[n][n], c[n][n], d[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            b[j][n-1-i] = a[i][j]; // 90°
            c[n-1-i][n-1-j] = a[i][j]; // 180°
            d[n-1-j][i] = a[i][j]; // 270°
        }
    }

    int ans=0;
    int m=n-1;
    for(int i=0;i<n/2;i++){
        for(int j=i;j<m;j++){
            int zero=0,one=0;
            a[i][j]=='0'?zero++:one++;
            b[i][j]=='0'?zero++:one++;
            c[i][j]=='0'?zero++:one++;
            d[i][j]=='0'?zero++:one++;
            ans+=min(zero,one);
        }
        --m;
    }
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