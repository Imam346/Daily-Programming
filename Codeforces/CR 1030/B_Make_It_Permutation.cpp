/*----------------------------------------
    author:  Imam
    created: 12.06.2025 21:52:26
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
inline void solve()
{
    int n; cin>>n;
    vector<tuple<int,int,int>> vec;
    for(int i=1;i<=n;i++){
        if(i==1){
            vec.push_back({1,2,n});
        }
        else{
            vec.push_back({i,1,i});
            if(i<=n-2)vec.push_back({i,i+1,n});
        }
    }
    cout<<(2*n)-3<<'\n';
    for(auto [a,b,c]:vec) cout<<a<<" "<<b<<" "<<c<<'\n';
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}
/*
n=5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
=
1 2 3 4 5
2 1 3 4 5 <= column 1 to 2 reverse
3 2 1 4 5 <= column 1 to 3 reverse
4 3 2 1 5 <= column 1 to 4 reverse
5 4 3 2 1 <= column 1 to 5 reverse
=
// remanning column reverse of each row
1 2 3 4 5
2 1 5 4 3 <= col 3 to 5 reverse
3 2 1 5 4 <= col 4 to 5 reverse
4 3 2 1 5 
5 4 3 2 1
=
//finally reverse first row without 1
1 5 4 3 2
2 1 5 4 3
3 2 1 5 4
4 3 2 1 5 
5 4 3 2 1
*/