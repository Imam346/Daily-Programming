//Don't disappoint me
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while(n--)
    {
        string s; cin>>s;
        int m = s.size();
        vector<int> vec;
        for(int i=0;i<m;i++){
            int cnt=0;
            if(s[i]=='1'){
                while(i<m && s[i]=='1') {i++;cnt++;}
                vec.push_back(cnt);
            }
        }
        sort(vec.rbegin(),vec.rend());
        int ans = 0;
        for(int i=0;i<vec.size();i+=2) {ans += vec[i];}
        cout<<ans<<endl;
    }
    return 0;
}