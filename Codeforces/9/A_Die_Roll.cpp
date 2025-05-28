#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int y,w;
    cin>>y>>w;
    int mx = max(y,w);
    //The number of favorable outcomes
    int cnt =0;
    for(int i=mx;i<=6;i++)
    {
        cnt++;
        mx = max(mx,i);
    }
    //total number of possible outcomes
    int total = 6;
    int divisor = __gcd(cnt,total);
    cout<<cnt/divisor<<"/"<<total/divisor<<endl;
    return 0;
}