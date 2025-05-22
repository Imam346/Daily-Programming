#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam
    
    string s; cin>>s;
    int n = s.size();
    for(int i=n/2+1;i<n;i++)
    {
        string tmp1 = s.substr(n-i,n);
        string tmp2 = s.substr(0,i);
        // cout<<tmp1<<" "<<tmp2<<endl;
        if(tmp1==tmp2)
        {
            cout<<"YES"<<'\n';
            cout<<tmp1<<'\n';
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}