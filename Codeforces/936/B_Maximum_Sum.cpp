#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// Fast exponentiation to compute powers of 2 modulo mod
ll fast_exp(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int t; 
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> ar(n);
        ll total_sum = 0;

        // Step 1: Calculate the total sum of the array
        for (ll i = 0; i < n; i++) {
            cin >> ar[i];
            total_sum = (total_sum + ar[i]) % mod;
        }

        // Step 2: Find the best subarray sum using Kadane's Algorithm
        ll best = 0, current_sum = 0;
        for (int i = 0; i < n; i++) {
            current_sum = max(ar[i], current_sum + ar[i]);
            best = max(best, current_sum);
        }

        // Step 3: Use the formula s + (2^k - 1) * x
        if (best > 0) {
            ll factor = fast_exp(2, k) - 1;  // 2^k - 1, careful with negative results in mod
            if (factor < 0) factor += mod;  // Ensure non-negative result
            ll result = (total_sum + (factor * best) % mod) % mod;
            cout << result << endl;
        } else {
            // If best subarray sum is <= 0, no benefit in adding it multiple times
            cout << (total_sum + mod) % mod << endl;
        }
    }

    return 0;
}
