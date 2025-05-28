#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    string s; cin>>s;
    char current = 'a';
    int ans=0;
    for(char c:s)
    {
        int clock_wise = abs(c-current);
        int counter_clk_wise = abs(26-clock_wise);
        // cout<<clock_wise<<" "<<counter_clk_wise<<endl;
        ans += min(clock_wise, counter_clk_wise);
        current = c;
    }
    cout<<ans<<endl;
    return 0;
}