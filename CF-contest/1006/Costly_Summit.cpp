#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, C;
        cin >> N >> C;
        string S;
        cin >> S;

        vector<int> counts(5, 0);
        for (char c : S) {
            counts[c - 'A']++;
        }

        int min_cost = INT_MAX;

        // Check all subsets of languages (0 to 31)
        for (int mask = 0; mask < 32; ++mask) {
            int selected = __builtin_popcount(mask);
            int cost_learn = selected * C;
            int covered = 0;
            for (int lang = 0; lang < 5; ++lang) {
                if (mask & (1 << lang)) {
                    covered += counts[lang];
                }
            }
            int remaining = N - covered;
            int cost_translator = remaining * (remaining + 1) / 2;
            int total = cost_learn + cost_translator;
            if (total < min_cost) {
                min_cost = total;
            }
        }

        cout << min_cost << '\n';
    }

    return 0;
}