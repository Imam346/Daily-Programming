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
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        bool present[26] = {false};
        for (char c : s)
        {
            present[c - 'a'] = true;
        }

        vector<char> r;
        for (int i=0;i<26;i++)
        {
            if (present[i])
                r.push_back('a' + i);
        }

        vector<char> r1(r);
        reverse(r1.begin(), r1.end());

        //array to map each character to its corresponding reversed character
        char cnt[26];
        for (size_t i = 0; i < r.size(); ++i)
        {
            cnt[r[i] - 'a'] = r1[i];
        }

        //construct the answer string
        string ans;
        for (char c : s)ans += cnt[c - 'a'];

        cout<<ans<<'\n';
    }
    return 0;
}