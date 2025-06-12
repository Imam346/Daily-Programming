#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam

    int t; cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;

        int i=0, ans=0;
        while(l+i <= r)
        {
            l += i;
            i++;
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
/*
a1 = L
a2 = a1 + 1
a3 = a2 + 2
a4 = a3 + 3
a5 = a4 + 4
...........

*/