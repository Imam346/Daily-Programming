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

int32_t main()
{
    Code By Imam
    ll a,b,c,x;
    cin>>a>>b>>c>>x;
    ll cuboid = a*b*c;
    ll cube = pow(x,3);
    if(cuboid>cube)
        cout<<"Cuboid"<<endl;
    else if(cube>cuboid)
        cout<<"Cube"<<endl;
    else cout<<"Equal"<<endl;
    return 0;
}