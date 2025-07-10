/*----------------------------------------
    author:  Imam
    created: 28.06.2025 23:47:40
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    unordered_map<int,int>mp;
    for(int x,i=1;i<=n;i++){
        cin>>x;
        mp[x%10]++;
    }

    vector<int> vec;
    for(auto [x,y]:mp){
        if(y==1) vec.push_back(x);
        else if(y==2){
            vec.push_back(x);
            vec.push_back(x);
        }
        else{
            vec.push_back(x);
            vec.push_back(x);
            vec.push_back(x);
        }
    }

    bool flag=false;
    n=vec.size();
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                int tmp = vec[i]+vec[j]+vec[k];
                if(tmp%10==3){
                    flag=true;
                    break;
                }
            }
            if(flag){break;}
        }
        if(flag){break;}
    }
    cout<<(flag?"YES":"NO")<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}