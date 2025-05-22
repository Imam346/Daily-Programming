/*----------------------------------------
    author:  Imam
    created: 24.01.2025 10:32:28
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        int freq1[26]={0};
        int freq2[26]={0};
        for(char &c:s){
            freq1[c-'a']++;
        }
        for(char &c:t){
            freq2[c-'a']++;
        }

        bool flag=false;
        for(int i=0;i<26;i++){
            if(freq1[i] && freq2[i]){
                flag=true;
                break;
            }
        }
        cout<<(flag?"YES\n":"NO\n");
    }
    return 0;
}