#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (auto &x : ar) cin >> x;
    vector<pair<int, int>> sorted; // store (value, index)
    for (int i = 0; i < n; ++i) {
        sorted.emplace_back(ar[i], i);
    }
    sort(sorted.begin(), sorted.end()); // sort by value

    int ans = 0;

    // Loop over all pairs j, k (j < k)
    for (int j = 0; j < n; ++j) {
        for (int k = j + 1; k < n; ++k) {
            int sum = ar[j] + ar[k];

            // Find largest A[i] < sum and i ≠ j, k
            auto it = upper_bound(sorted.begin(), sorted.end(), make_pair(sum - 1, INT_MAX));

            while (it != sorted.begin()) {
                --it;
                int val = it->first;
                int idx = it->second;
                if (idx != j && idx != k) {
                    ans = max(ans, val % sum);
                    break;
                }
            }
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
