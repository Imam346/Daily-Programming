/*----------------------------------------
    author:  Imam
    created: 17.01.2025 20:29:17
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        cout<<(n%m==0?"YES\n":"NO\n");
    }
    return 0;
}