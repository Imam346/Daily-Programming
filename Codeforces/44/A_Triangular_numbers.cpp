#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    Code_By_Imam

    set<int> s = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 
                    78, 91, 105, 120, 136, 153, 171, 190,
                    210, 231, 253, 276, 300, 325, 351, 378, 
                    406, 435, 465, 496};

    int n; cin>>n;
    
    if(s.find(n) != s.end())
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}