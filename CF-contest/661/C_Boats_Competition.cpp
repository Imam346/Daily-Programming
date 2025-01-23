/*----------------------------------------
    author:  Imam
    created: 23.01.2025 09:43:25
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>ar(n);
        for(int &i:ar) cin>>i;
        set<int>s;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                // cout<<ar[i]<<" "<<ar[j]<<endl;
                s.insert((ar[i]+ar[j]));
            }
        }

        vector<int> vec(s.begin(),s.end());
        int ans=0;
        vector<int> tmp=ar;
        for(auto &target:vec){
            int cnt=0;
            for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    if((ar[i]+ar[j])==target){
                        ar[i]=1e5;
                        ar[j]=1e5;
                        cnt++;
                    }
                }
            }
            ans = max(ans, cnt);
            ar=tmp;
        }
        cout<<ans<<'\n';
    }
    return 0;
}