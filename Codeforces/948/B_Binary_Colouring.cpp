#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int x; cin>>x;
        vector<int> ar;

        while(x!=0)
        {
            if(x%2==0)
            {
                ar.push_back(0);
                x /=2;
            }
            else if(x%4==1)
            {
                ar.push_back(1);
                x /=2;
            }
            else
            {
                ar.push_back(-1);
                x = (x+1)/2;
            }
        }

        cout<<ar.size()<<'\n';
        for(auto val:ar) cout<<val<<" ";
        cout<<"\n";
    }
    return 0;
}
/*
** intuition ki chilo ei approach er?

ans:
    4 2 1 ay system ar binary kora hoyse nah ay approch thake ata mathai asse
    but kore dakhi mile gase
    4 2 1 0
*/