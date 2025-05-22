#include <iostream>
#include <limits>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        if (n == 1) {
            // If there's only one type of card, output the available coins
            cout << k << endl;
        } else {
            // For n > 1, calculate necessary values
            int sum = n - 2;  // Calculated sum (n - 2)
            int tmp = numeric_limits<int>::max();  // Initialize tmp to a large number
            
            // Find the maximum value of tmp such that (tmp + 1 + sum) <= k
            while ((tmp + 1 + sum) > k) {
                tmp = tmp >> 1;  // Use bit manipulation to reduce tmp
            }
            
            // Output the result
            for (int i = 0; i < n - 2; ++i) {
                cout << "1 ";  // Output '1' (n-2) times
            }
            cout << (k - (tmp + sum)) << " " << tmp << endl;  // Output calculated values
        }
    }
    
    return 0;
}
