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
#define lb(x, ds) lower_bound(ds.begin(), ds.end(), x)
#define ub(x, ds) upper_bound(ds.begin(), ds.end(), x)
#define getMx(x) *max_element(all(x))
#define getMn(x) *min_element(all(x))

// Looping Mechanism
#define forEach(x, ds) for (auto &x : ds)
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,n) for(int i=n-1;i>=0;i--)

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

// Mathematical functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}

int32_t main()
{
    Code By Imam
    int n,c;
    cin>>n>>c;
    v p(n); v t(n);
    for(auto &i:p) cin>>i;
    for(auto &i:t) cin>>i;
    
    ll Limak=0LL, x=0LL;
    fl(i,n)
    {
        x += t[i];
        ll cur = max(0LL,p[i]-c*x);
        Limak += cur;
    }
    x=0LL;
    ll Rodewoosh=0LL;
    rl(i,n)
    {
        x += t[i];
        ll cur = max(0LL,p[i]-c*x);
        Rodewoosh += cur;
    }

    if(Limak>Rodewoosh) cout<<"Limak"<<endl;
    else if(Rodewoosh>Limak) cout<<"Radewoosh"<<endl;
    else cout<<"Tie"<<endl;
    return 0;
}