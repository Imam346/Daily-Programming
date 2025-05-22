#include<bits/stdc++.h>
using namespace std;

// Shortcut
#define endl '\n'
#define yes cout << "YES"
#define no cout << "NO"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define getMx(x) *max_element(all(x))
#define getMn(x) *min_element(all(x))

// Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

// Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;
 
// Constants variables
const lld pi= 3.141592653589793238;
const ll INF= 9223372036854775807;
const ll mod=1000000007;

// Data Types
typedef vector<ll> v;
typedef vector<string> vs;
typedef map<ll,ll> mp;

// Math functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}

void solve()
{
    ll d1,d2,d3;
    cin>>d1>>d2>>d3;
    ll a = (2*d1) + (2*d2);
    ll b = (d1+d2+d3);
    ll c = (2*d1) + (2*d3);
    ll d = (2*d2) + (2*d3);
    ll ans = min({a,b,c,d});
    cout<<ans<<endl;
}
int32_t main()
{
    Code By Imam
    solve();
    return 0;
}