/*----------------------------------------
    author:  Imam
    created: 01.02.2025 13:18:48
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    ll x; cin>>x;
    int cnt=0;
    for(int i=1;i<=(int)sqrt(x);i++){
        if(x%i==0){
            if((x/i)==i) cnt++;
            else cnt+=2;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}