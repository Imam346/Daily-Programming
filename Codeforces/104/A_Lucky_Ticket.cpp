#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
using namespace std;

//pbds
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int32_t main()
{
    Code By Imam
    int n; cin>>n;
    string s; cin>>s;

    for(char c:s)
    {
        if(c!='4' and c!='7')
        {
            cout<<"NO\n";
            return 0;
        }
    }
    string str1 = s.substr(0, n/2);
    string str2 = s.substr(n/2, n);
    // cout<<str1<<" "<<str2<<endl;
    
    int first_half = 0;
    for(char c:str1) first_half += c-48;
    int second_half = 0;
    for(char c:str2) second_half += c-48;

    // cout<<first_half<<" "<<second_half<<endl;

    if(first_half == second_half) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}