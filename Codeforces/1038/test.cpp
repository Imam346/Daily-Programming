#include <bits/stdc++.h>
using namespace std;

// Check if appending x to q creates a monotone run of length ≥ 5
bool makes_bad(const vector<int> &q, int x) {
    int cnt_inc = 1, cnt_dec = 1;
    // Check increasing suffix ending at x
    for (int i = q.size() - 1, last = x; i >= 0 && cnt_inc < 5; --i) {
        if (q[i] < last) {
            last = q[i];
            ++cnt_inc;
        } else break;
    }
    if (cnt_inc >= 5) return true;

    // Check decreasing suffix ending at x
    for (int i = q.size() - 1, last = x; i >= 0 && cnt_dec < 5; --i) {
        if (q[i] > last) {
            last = q[i];
            ++cnt_dec;
        } else break;
    }
    return cnt_dec >= 5;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) 
            cin >> p[i];

        int l = 0, r = n - 1;
        vector<int> q; 
        q.reserve(n);
        string ans;
        ans.reserve(n);

        for (int step = 0; step < n; step++) {
            // Try left
            if (!makes_bad(q, p[l])) {
                q.push_back(p[l]);
                ans.push_back('L');
                ++l;
            }
            else {
                // Otherwise, it's safe to take right
                q.push_back(p[r]);
                ans.push_back('R');
                --r;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}