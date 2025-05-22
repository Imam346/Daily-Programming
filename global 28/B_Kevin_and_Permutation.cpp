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
typedef vector<int> v;
typedef vector<string> vs;
typedef map<ll,ll> mp;

// Math functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ull pow_mod(ll base, ll exp, ll mod){ull res = 1;base = base % mod;if (base == 0) return 0;while (exp > 0){if (exp & 1)res = (res*base) % mod;exp = exp>>1;base = (base*base) % mod;}return res;}

/*-----------------------------------------------------------------------------------------------------------------------------*/

inline void solve()
{
    int n,k;
    cin>>n>>k;
    vector<bool> ar(n+1,false);
    vector<int> ans;
    int cnt=0,x=0, tmp=1;//tmp is last value of subarray
    for(int i=n;i>=1;i--){
        cnt++,x++;
        if(cnt==k && !ar[tmp]){
            ans.pb(tmp);
            ar[tmp]=true;
            tmp++;
            i++;
            cnt=0;
        }
        else{
            if(!ar[i]){
                ans.pb(i);
            }
            ar[i]=true;
        }
        if(x==n){break;}
    }

    for(auto val:ans) cout<<val<<" ";
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