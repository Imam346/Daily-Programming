#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> v = {a,b,c};
    sort(v.begin(),v.end());

    a = v[0], b = v[1], c = v[2];
    int ans = (c-b) + (b-a);
    cout<<ans<<endl;
    return 0;
}