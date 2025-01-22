/*----------------------------------------
    author:  Imam
    created: 22.01.2025 06:41:13
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector<tuple<int,int,int>>vec;
    long long total=0;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        total+=x;
        vec.push_back(make_tuple((x-y),x,y));
    }
    sort(vec.rbegin(),vec.rend());

    int cnt=0;
    bool flag=false;
    for(auto &[x,y,z]:vec){
        // cout<<x<<" "<<y<<" "<<z<<endl;
        if(total<=m){flag=true;break;}
        total-=x;
        cnt++;
    }
    if(total<=m){flag=true;}
    
    cout<<(flag?cnt:-1)<<endl;
    return 0;
}