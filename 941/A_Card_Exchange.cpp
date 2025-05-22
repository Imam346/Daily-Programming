#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> count(101, 0); // Array to count occurrences of each card number

        // Count occurrences of each card number
        for (int i = 0; i < n; ++i) {
            int card;
            cin >> card;
            count[card]++;
        }

        int minRemaining = 0;

        // Iterate over each card number from 1 to 100
        for (int i = 1; i <= 100; ++i) {
            int numCards = count[i];

            if (numCards > 0) {
                int groups = numCards / k;
                int remainder = numCards % k;
                
                // Calculate remaining cards after optimal reductions
                if (groups > 0) {
                    minRemaining += remainder + groups * (k - 1);
                } else {
                    minRemaining += numCards; // All cards of this type remain
                }
            }
        }

        cout << minRemaining << endl;
    }

    return 0;
}
