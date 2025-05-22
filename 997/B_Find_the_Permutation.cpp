/*----------------------------------------
    author:  Imam
    created: 19.01.2025 15:26:27
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<string> mat(n);
    for(string &i:mat) cin>>i;
    vector<int> p(n,-1);
    for(int i=n-1;i>=0;i--){
        int cnt=0;
        for(int j=0;j<i;j++){
            if(mat[j][i]=='1'){
                cnt++;
            }
        }
        for(int j=0;j<n;j++){
            if(p[j]==-1){
                if(cnt==0){
                    p[j]=i+1;
                    break;
                }
                cnt--;
            }
        }
    }

    for(int &val:p) cout<<val<<" ";
    cout<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--){solve();}
    return 0;
}