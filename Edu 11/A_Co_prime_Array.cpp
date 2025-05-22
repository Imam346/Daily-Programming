//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}

int main()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(int &i:ar) cin>>i;
    
    vector<int> ans;
    int cnt=0;
    for(int i=1,j=0;i<n;i++,j++){
        if(gcd(ar[i],ar[j])>1){
            ans.push_back(ar[j]);
            ans.push_back(1);
            cnt++;
        }
        else ans.push_back(ar[j]);
    }
    ans.push_back(ar.back());
    cout<<cnt<<endl;
    for(int x:ans) cout<<x<<" ";
    return 0;
}