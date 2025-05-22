/*----------------------------------------
    author:  Imam
    created: 08.12.2024 15:06:19
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n; cin>>n;
    ll mx = INT_MIN;
    while(n--){
        ll x,y;
        cin>>x>>y;
        mx = max(mx,x+y);
    }
    cout<<mx<<'\n';
    return 0;
}