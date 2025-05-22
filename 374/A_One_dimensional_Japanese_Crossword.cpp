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

    int k=0;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            k++;
            int cnt=0;
            while(i<n && s[i]!='W')
            {
                i++;
                cnt++;
            }
            vec.push_back(cnt);
        }
    }
    cout<<k<<'\n';
    for(auto x:vec) cout<<x<<" ";
    return 0;
}