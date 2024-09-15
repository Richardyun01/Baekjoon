#include <bits/stdc++.h>
using namespace std;
int dp[1001];
int main() {
    int n, arr[1001];
    vector<int> lis[1001];
    vector<int> ans;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        lis[i].push_back(arr[i]);
        for (int j = 1; j < i; j++) {
            if (arr[i] > arr[j]) {
                if (dp[i] < dp[j] + 1) {
                    lis[i].clear();
                    lis[i] = lis[j];
                    lis[i].push_back(arr[i]);
                    dp[i] = dp[j] + 1;
                }
            }
        }
        if (ans.size() < lis[i].size()) {
            ans = lis[i];
        }
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}