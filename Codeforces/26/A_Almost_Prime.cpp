/*----------------------------------------
    author:  Imam
    created: 06.02.2025 17:28:22
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

vector<int>all_prime;
void prime(int n)
{
    vector<bool>prime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i+i;j<=n;j+=i)
                prime[j]=false;
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]){
            all_prime.push_back(i);
        }
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);

    int n; cin>>n;
    prime(n);
    int ans=0;
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=0;j<all_prime.size();j++)
            if(i%all_prime[j]==0) cnt++;
        if(cnt==2) ans++;
    }
    cout<<ans<<'\n';
    return 0;
}