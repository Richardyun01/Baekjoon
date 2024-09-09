#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    map<string, bool> dancer;
    string p1, p2;
    dancer["ChongChong"] = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p1 >> p2;
        if (dancer[p1] || dancer[p2]) {
            dancer[p1] = true;
            dancer[p2] = true;
        }
    }
    int ans = 0;
    for (auto it : dancer) {
        if (it.second) ans++;
    }
    cout << ans;
    return 0;
}