#include<bits/stdc++.h>
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
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for(int &i:a) cin>>i;
        for(int &i:b) cin>>i;

        int cnt = 0;
        while (true)
        {
            sort(a.begin(), a.end());
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > b[i])
                {
                    ok = false;
                    break;
                }
            }
            if (ok) break;
            a.back() = 0; //replace the largest element with 0
            cnt++;
        }
        
        cout << cnt << '\n';
    }
    return 0;
}