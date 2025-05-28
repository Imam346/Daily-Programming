#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam

    int n,m;
    cin>>n>>m;

    //sieve algo time complexity 0(NloglogN)
    vector<bool> sieve(m,true);
    for(int i=2;i*i<=m;i++)
    {
        if(sieve[i])
        {
            for(int j=i+i;j<=m;j+=i)
                sieve[j]=false;
        }
    }

    vector<int> prime;
    for(int i=2;i<=m;i++)
    {
        if(sieve[i])
            prime.push_back(i);
    }

    bool flag=false;
    for(int i=0;i<prime.size();i++)
    {
        if(prime[i]==n && prime[i+1]==m)
        {
            flag=true;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

