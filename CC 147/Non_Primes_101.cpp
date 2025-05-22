#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

unordered_set<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};
inline bool is_prime(int num)
{
    return prime.find(num) != prime.end();
}
inline pair<int,int> find_non_prime_pair(vector<int>& ar,int n)
{
    unordered_map<int,int> val_and_idx;
    for(int i=0;i<n;i++)
    {
        int cur_val = ar[i];
        for(auto& [key,val]:val_and_idx)
        {
            int sum = key+cur_val;
            if(!is_prime(sum))
            {
                return {val,i+1}; //1 based index
            }
        }
        val_and_idx[cur_val] = i+1;//1 based index
    }
    return {-1,-1}; // no valid pair found
}
int main()
{
    Code_By_Imam

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;

        auto result = find_non_prime_pair(ar,n);
        
        if(result.first==-1)
            cout<<-1<<endl;
        else
            cout<<result.first<<" "<<result.second<<endl;
    }
    return 0;
}