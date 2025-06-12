#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n;
    cin >> n;
    vector<int> b(n - 2);
    for (int &x : b) cin >> x;

    // Initialize array 'a' arbitrarily
    vector<int> a(n, 0);
    a[0] = 0; // Arbitrary value for a1
    a[1] = 0; // Arbitrary value for a2

    // Construct the rest of the array
    bool valid = true;
    for (int i = 1; i < n - 1; ++i) {
        if (b[i - 1] == 1) {
            // ai+1 must equal ai
            a[i + 1] = a[i];
        } else {
            // ai+1 must differ from ai
            a[i + 1] = a[i] + 1;
        }
    }

    // Validate the constructed array
    for (int i = 1; i < n - 1; ++i) {
        if ((a[i] == a[i - 1] && a[i] == a[i + 1]) != (b[i - 1] == 1)) {
            valid = false;
            break;
        }
    }

    cout << (valid ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}