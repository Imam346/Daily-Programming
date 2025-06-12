/*----------------------------------------
    author:  Imam
    created: 05.03.2025 20:40:03
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int x,y;
    cin>>x>>y;
    if(x==1){cout<<y/2<<'\n';}
    else if(x==y){cout<<0<<'\n';}
    else{cout<<y/x<<'\n';}
    return 0;
}