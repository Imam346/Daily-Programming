//Don't disappoint me
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x = ceil(n/2.0);
        int y = ceil((n-k)/2.0);
        int sub = x-y;
        cout<<(sub%2==0?"YES":"NO")<<endl;
    }
    return 0;
}