#include <iostream>
#include <vector>
using namespace std;

#define Code_By_Imam ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    Code_By_Imam;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        
        int operations = 0;
        int prev = h[0]; // Initialize with the first element
        for (int i = 1; i < n; i++) {
            if (h[i] < prev) {
                // Increment h[i] to prev
                operations += (prev - h[i]);
            } else {
                // Update prev to the current value
                prev = h[i];
            }
        }
        
        cout << operations << '\n';
    }
    return 0;
}
