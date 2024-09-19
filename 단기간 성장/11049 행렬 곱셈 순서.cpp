#include <bits/stdc++.h>
#define MAX 1000000000
using namespace std;
int sum[501], mat[501][2], dp[501][501];
int main() {
    int n, r, c;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> r >> c;
        mat[i][0] = r;
        mat[i][1] = c;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; i+j <= n; j++) {
            dp[j][i+j] = MAX;
            for (int k = j; k <= i+j; k++) {
                dp[j][i+j] = min(dp[j][i+j], dp[j][k]+dp[k+1][i+j] + mat[j][0]*mat[k][1]*mat[i+j][1]);
            }
        }
    }
    cout << dp[1][n];
    return 0;
}