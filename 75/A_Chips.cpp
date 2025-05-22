#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int n,m;
    cin>>n>>m;
    int ans=0, i=1;
    while(m!=0)
    {
        if(m>=i)
        {
            m -= i;
            ans = m;
            i++;
        }
        else break;
        if(i==n+1)
            i=1;
    }
    cout<<ans<<endl;
    return 0;
}