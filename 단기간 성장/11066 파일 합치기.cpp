#include <bits/stdc++.h>
using namespace std;
int sum[501], dp[501][501];
int main() {
  int t, k, size;
  sum[0] = 0;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> k;
    for (int j = 1; j <= k; j++) {
      cin >> size;
      sum[j] = sum[j-1] + size;
    }
    for (int j = 1; j < k; j++) {
      for (int p = 1; p <= k-j; p++) {
        int q = p + j;
        dp[p][q] = INT_MAX;
        for (int mid = p; mid < q; mid++) {
          dp[p][q] = min(dp[p][q], dp[p][mid] + dp[mid+1][q] + sum[q] - sum[p-1]);
        }
      }
    }
    cout << dp[1][k] << "\n";
  }
  return 0;
}