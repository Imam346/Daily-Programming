#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,q;
        bool ok=1;
        cin>>n>>m>>q;
        deque<int> a(n),b(m);
        vector<bool> vis(n,0);
        for(auto &v:a)
        {
            cin>>v;
            v--;
        }
        for(auto &v:b)
        {
            cin>>v;
            v--;
        }
        while(b.size())
        {
            if(vis[b[0]])
            {
                b.pop_front();
            }
            else
            {
                if(a[0]==b[0])
                {
                    vis[a[0]]=1;
                    a.pop_front();
                    b.pop_front();
                }
                else
                {
                    ok=0;
                    break;
                }
            }
        }
        cout<<(ok?"YA\n":"TIDAK\n");
    }
    return 0;
}