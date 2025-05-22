#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int n; cin>>n;
    string s; cin>>s;
    int cnt1=0,cnt2=0;
    for(char c:s)
    {
        if(c=='A') cnt1++;
        else cnt2++;
    }

    if(cnt1>cnt2) cout<<"Anton";
    else if(cnt1<cnt2) cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}