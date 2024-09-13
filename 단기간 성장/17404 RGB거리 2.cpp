#include <bits/stdc++.h>
using namespace std;
int rgb[1001][3];
int dp[1001][3];
int main() {
    int n, ans = 1000001;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> rgb[i][0] >> rgb[i][1] >> rgb[i][2];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == i) dp[1][j] = rgb[1][j];
            else dp[1][j] = 1000001;
        }
        for (int j = 2; j <= n; j++) {
            dp[j][0] = rgb[j][0] + min(dp[j-1][1], dp[j-1][2]);
            dp[j][1] = rgb[j][1] + min(dp[j-1][0], dp[j-1][2]);
            dp[j][2] = rgb[j][2] + min(dp[j-1][0], dp[j-1][1]);
        }
        for (int j = 0; j < 3; j++) {
            if (j == i) continue;
            else ans = min(ans, dp[n][j]);
        }
    }
    cout << ans;
    return 0;
}