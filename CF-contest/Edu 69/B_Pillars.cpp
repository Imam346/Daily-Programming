/*----------------------------------------
    author:  Imam
    created: 01.02.2025 17:46:54
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); cout.tie(NULL);

    int n; cin>>n;
    vector<int> ar(n);
    int mx = INT_MIN, idx=-1;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]>mx){
            mx = ar[i];
            idx=i;
        }
    }
    bool ok=true;
    if(idx==0){
        for(int i=idx+1;i<n-1;i++){
            if(ar[i]<ar[i+1]){
                ok=false;
                break;
            }
        }
    }
    else if(idx==(n-1)){
        for(int i=idx-1;i>=0;i--){
            if(ar[i]>ar[i+1]){
                ok=false;
                break;
            }
        }
    }
    else{
        for(int i=idx+1;i<n-1;i++){
            if(ar[i]<ar[i+1]){
                ok=false;
                break;
            }
        }
        for(int i=idx-1;i>=0;i--){
            if(ar[i]>ar[i+1]){
                ok=false;
                break;
            }
        }
    }

    cout<<(ok?"YES\n":"NO\n");
    return 0;
}