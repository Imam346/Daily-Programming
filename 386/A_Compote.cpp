#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int a,b,c;
    cin>>a>>b>>c;

    int ans = 0;
    for(int i=1;i<=a;i++)
    {
        int j = 2*i;
        int k = 4*i;
        
        if(j<=b && k<=c)
        {
            // cout<<i<<" "<<j<<" "<<k<<endl;
            ans = (i+j+k);
        }
        else break;
    }
    cout<<ans<<endl;
    return 0;
}