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

bool fun(string &s)
{
    //condition 1: If "111" exists in the string
    if(s.find("111") != s.npos) return true;

    //condition 2: If "11" appears at least twice in the string
    int cnt = 0;
    for(int i=0;i<s.size()-1; i++)
    {
        if(s[i] == '1' && s[i+1]=='1') cnt++;
    }
    if(cnt>=2) return true;

    //condition 3: If the string begins and ends with "1"
    if(s.front()=='1' and s.back()=='1') 
        return true;
    //condition 4: If the string begins or ends with "1" and "11" exists in the string
    if((s.front()=='1' or s.back()=='1') and cnt>=1)
        return true;
    
    //if none of the condition are met
    return false;
}
int32_t main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        cout<<(fun(s)? "Yes":"No")<<endl;
    }
    return 0;
}