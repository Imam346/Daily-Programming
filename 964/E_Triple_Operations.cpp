#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 2e5+10;
int pref[N], cnt[N];

inline int get_num_digits(int n)
{
    int cnt=0;
    while(n!=0)
    {
        cnt++;
        n /= 3;
    }
    return cnt;
}

inline void solve()
{
    int l,r;
    cin>>l>>r;
    r++;

    int sum = pref[r] - pref[l];
    int mn = cnt[l];
    cout<<sum+mn<<'\n';
}
int main()
{
    Code_By_Imam
    
    //Pre-Calculate
    for(int i=0;i<N-1;i++)
    {
        cnt[i] = get_num_digits(i);
        pref[i+1] = pref[i] + cnt[i];
    }
    //test case
    int t; cin>>t;
    while(t--) solve();
    return 0;
}