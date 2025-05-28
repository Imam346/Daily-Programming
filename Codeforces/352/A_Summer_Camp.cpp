#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int n; cin>>n;
    string s = "";
    for(int i=1;i<=n;i++)
        s += to_string(i);
    cout<<s[n-1]<<endl;
    return 0;
}