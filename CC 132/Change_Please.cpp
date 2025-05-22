#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int x; cin>>x;
        int sub = 100-x;
        int back = sub/10;
        cout<<(back*10)<<'\n';
    }
    return 0;
}