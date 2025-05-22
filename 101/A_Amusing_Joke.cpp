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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string new_s = s1+s2;
    
    vector<int> freq1(26,0);
    for(int i=0;i<new_s.size();i++)
        freq1[new_s[i]-'A']++;
    vector<int> freq2(26,0);
    for(int i=0;i<s3.size();i++)
        freq2[s3[i]-'A']++;
    
    bool flag=true;
    for(int i=0;i<26;i++)
    {
        if(freq1[i]!=freq2[i])
        {
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}