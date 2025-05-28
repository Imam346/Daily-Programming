#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int count_valid_pairs(int n, int m) {
  vector<int> gcd_arr(m + 1, 1);  // Initialize GCD array with 1s

  // Precompute GCD for each possible value of b
  for (int b = 2; b <= m; ++b) {
    for (int i = b; i <= m; i += b) {
      gcd_arr[i] = gcd(gcd_arr[i], b);
    }
  }

  int count = 0;
  for (int a = 1; a <= n; ++a) {
    int max_divisor = min(a, m);  // Limit maximum divisor to avoid exceeding m
    int i = 0;
    while (i < max_divisor) {  // Ensure i doesn't go beyond valid GCD indices
      if (gcd_arr[i] <= a) {
        if (a % gcd_arr[i] == 0) {
          count += m - i;  // Count valid pairs for current b values (from i + 1 to m)
        }
      }
      ++i;
    }
  }

  return count;
}

int main() {
  int t;
  cin >> t;
  for (int _ = 0; _ < t; ++_) {
    int n, m;
    cin >> n >> m;
    int count = count_valid_pairs(n, m);
    cout << count << endl;
  }

  return 0;
}
