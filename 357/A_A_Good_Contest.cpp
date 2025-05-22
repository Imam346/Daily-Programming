#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int n; cin>>n;
    bool flag=false;
    while(n--)
    {
        string s;
        int before,after;
        cin>>s>>before>>after;
        if(before>=2400 && after>before)
        {
            flag=true;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}