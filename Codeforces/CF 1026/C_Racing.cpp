#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; ++i) cin >> d[i];

    vector<int> l(n), r(n);
    for (int i = 0; i < n; ++i) cin >> l[i] >> r[i];

    // Forward: Calculate possible height range at each step
    vector<int> minH(n+1), maxH(n+1);
    minH[0] = maxH[0] = 0;

    for (int i = 0; i < n; ++i) {
        int low = minH[i], high = maxH[i];

        int nlow = 1e9, nhigh = -1;
        if (d[i] == -1 || d[i] == 0) {
            int h = low + 0;
            if (h >= l[i] && h <= r[i]) {
                nlow = min(nlow, h);
                nhigh = max(nhigh, h);
            }
            h = high + 0;
            if (h >= l[i] && h <= r[i]) {
                nlow = min(nlow, h);
                nhigh = max(nhigh, h);
            }
        }
        if (d[i] == -1 || d[i] == 1) {
            int h = low + 1;
            if (h >= l[i] && h <= r[i]) {
                nlow = min(nlow, h);
                nhigh = max(nhigh, h);
            }
            h = high + 1;
            if (h >= l[i] && h <= r[i]) {
                nlow = min(nlow, h);
                nhigh = max(nhigh, h);
            }
        }

        if (nlow > nhigh) {
            cout << -1 << "\n";
            return;
        }

        minH[i+1] = nlow;
        maxH[i+1] = nhigh;
    }

    // Backward: build actual values
    vector<int> h(n+1);
    h[n] = minH[n]; // pick minimum possible height at the end
    for (int i = n-1; i >= 0; --i) {
        if (d[i] == 0 || (d[i] == -1 && h[i+1] - 0 >= minH[i] && h[i+1] - 0 <= maxH[i])) {
            h[i] = h[i+1] - 0;
            d[i] = 0;
        } else if (d[i] == 1 || (d[i] == -1 && h[i+1] - 1 >= minH[i] && h[i+1] - 1 <= maxH[i])) {
            h[i] = h[i+1] - 1;
            d[i] = 1;
        } else {
            cout << -1 << "\n";
            return;
        }
    }

    for (int x : d) cout << x << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
