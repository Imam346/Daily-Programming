
#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<string> s(n);
        set<int> st;
        
        for(int i=0;i<n;i++)
        {
            cin>>s[i];

            int cnt1=0,cnt2=-1;
            for(int j=0;j<k;j++)
            {
                if (s[i][j] == '1')
                {
                    cnt1++;
                    cnt2 = j;
                }
            }
            if (cnt1 == 1)
            {
                st.insert(cnt2);
            }
        }
        if(st.size()==k) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}