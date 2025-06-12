// بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include<bits/stdc++.h>
using namespace std;

// Macros
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ff first
#define ss second
#define pb push_back
#define getMx(x) (*max_element((x).begin(), (x).end()))
#define getMn(x) (*min_element((x).begin(), (x).end()))

// Debug
#ifndef Imam346
#define debug(x) cerr << #x<<" "; cerr<<x<<" "; cerr << endl;
#else
#define debug(x);
#endif

// First I/O
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

// Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;
 
// Constants
const lld pi = 3.141592653589793238;
const ll inf = 9223372036854775807;
const ll mod = 1000000007;

// Data Types
typedef vector<ll> v;
typedef vector<string> vs;
typedef map<ll,ll> mp;

// Math functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ull pow_mod(ll base, ll exp, ll mod){ull res = 1;base = base % mod;if (base == 0) return 0;while (exp > 0){if (exp & 1)res = (res*base) % mod;exp = exp>>1;base = (base*base) % mod;}return res;}

/*-----------------------------------------------------------------------------------------------------------------------------*/

inline bool isComposite(ll n)
{
    if(n<=3) {return false;}
    if(n%2==0 || n%3==0) {return true;}

    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0) {return true;}
    }
    return false;
}
inline void solve()
{
    ll n; cin>>n;
    if(n<=4) {cout<<-1<<endl;return;}
    v odd,even;
    int four,five;
    for(int i=1;i<=n;i++){
        if(i==4){four=i;continue;}
        if(i==5){five=i;continue;}
        if(i%2) odd.pb(i);
        else even.pb(i);
    }
    v vec = even;
    vec.pb(four);
    vec.pb(five);
    vec.insert(vec.end(),odd.begin(),odd.end());
    for(auto val:vec) cout<<val<<" ";
    cout<<endl;
}
int32_t main()
{
    Code By Imam
    int t; cin>>t;
    while(t--) solve();
    //solve();
    return 0;
}