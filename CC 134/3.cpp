#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                cnt++;
                i++;
            }
        }

        cout<<n-cnt<<'\n';
    }
    return 0;
}