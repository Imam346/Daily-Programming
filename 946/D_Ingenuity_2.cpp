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

int32_t main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        
        ll x=0, y=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='N') y++;
            else if(s[i]=='S') y--;
            else if(s[i]=='E') x++;
            else x--;
        }
        if(abs(x)%2!=0 or abs(y)%2!=0)
        {
            cout<<"NO\n";
            continue;
        }

        x /=2, y /=2;
        ll N=0,S=0,E=0,W=0;
        if (x == 0 && y == 0)
        {
            if (n == 2){
                cout << "NO\n";
                continue;
            }

            // Check if there are any 'N' instructions
            bool foundNorth = false;
            for (int i = 0; i < n; i++){
                if (s[i] == 'N'){
                    foundNorth = true;
                    break;
                }
            }

            if (foundNorth) // If 'N' is found, set both N and S to 1 (true)
                N=1, S=1;
            else // If 'N' is not found, set both E and W to 1 (true)
                E=1, W=1;
        }

        if(y > 0) N=y;
        else if(y < 0) S -=y;
        if(x>0) E=x;
        else if(x<0) W -=x;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='N' && N)
            {
                cout<<"H";
                N--;
            }
            else if(s[i]=='S' && S)
            {
                cout<<"H";
                S--;
            }
            else if(s[i]=='E' && E)
            {
                cout<<"H";
                E--;
            }
            else if(s[i]=='W' && W)
            {
                cout<<"H";
                W--;
            }
            else cout<<"R";
        }
        cout<<endl;
    }
    return 0;
}