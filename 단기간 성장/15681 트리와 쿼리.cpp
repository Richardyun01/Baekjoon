#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
int dp[MAX];
bool visited[MAX];
vector<int> v[MAX];
bool leaf;
void dfs(int node, int parent) {
    visited[node] = true;
    for (int i = 0; i < v[node].size(); i++) {
        int next = v[node][i];
        if (visited[next]) continue;
        dfs(next, node);
    }
    if (parent != -1) {
        dp[parent] += dp[node];
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    fill_n(dp, MAX, 1);
    int n, r, q;
    cin >> n >> r >> q;
    int a, b, queue;
    for (int i = 0; i < n-1; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(r, -1);
    for (int i = 0; i < q; i++) {
        cin >> queue;
        cout << dp[queue] << "\n";
    }
    return 0;
}