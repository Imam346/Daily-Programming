#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<int> adj[200005];
vector<bool> visited(200005);
vector<int> dis(200005);

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src]=true;
    dis[src]=0;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        // cout<<node<<endl;
        for(auto child:adj[node])
        {
            if(!visited[child])
            {
                q.push(child);
                visited[child]=true;
                dis[child] = dis[node]+1;
            }
        }
    }

}
int main()
{
    Code_By_Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        for(int i=1;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int u,v;
        cin>>u>>v;
        for(int i=0;i<200005;i++)
            visited[i] = false;

        bfs(1);

        if(dis[u]%2==0)
            cout<<"Alice\n";
        else cout<<"Bob\n";
    }
    return 0;
}