//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int l=0,r=0;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        if(x>0) r++;
        else l++;
    }
    if(r<=1 || l<=1) {cout<<"Yes\n";}
    else {cout<<"No\n";}
    return 0;
}