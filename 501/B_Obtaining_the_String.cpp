/*----------------------------------------
    author:  Imam
    created: 22.01.2025 10:41:32
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    
    int n; cin>>n;
    string s,t;
    cin>>s>>t;
    if(s==t){cout<<0<<endl;return 0;}
    map<char,int>mp1,mp2;
    for(char &c:s){mp1[c]++;}
    for(char &c:t){mp2[c]++;}
    for(auto &[x,y]:mp1){
        if(mp1[x]!=mp2[x]){
            cout<<-1<<'\n';
            return 0;
        }
    }

    int a,b;
    for(a=0;a<n;a++){
        if(s[a]!=t[a]){
            break;
        }
    }
    for(b=n-1;b>=0;b--){
        if(s[b]!=t[b]){
            break;
        }
    }

    vector<char> vec(s.begin(),s.end());
    vector<int> idx;
    int ans=0;
    for(int i=a;i<=b;i++){
        if(vec[i]!=t[i]){
            int cnt=0,j=i;
            char c = t[i];
            while(j<vec.size() && vec[j]!=c){cnt++;j++;}
            for(int k=j;k>i;k--) idx.push_back(k);
            ans+=cnt;
            vec.insert(vec.begin()+i,c);
            vec.erase(vec.begin()+(j+1));
        }
    }

    s="";
    for(auto &c:vec) s+=c;
    if(s!=t){cout<<-1<<'\n';return 0;}
    cout<<ans<<'\n';
    for(auto &val:idx) cout<<val<<" ";
    return 0;
}