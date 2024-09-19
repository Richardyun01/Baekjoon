#include <bits/stdc++.h>
using namespace std;
priority_queue<int> maxH;
priority_queue<int, vector<int>, greater<int>> minH;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (i == 0) maxH.push(m);
        else if (i == 1) {
            if (m > maxH.top()) minH.push(m);
            else {
                minH.push(maxH.top());
                maxH.pop();
                maxH.push(m);
            }
        } else {
            maxH.push(m);
            if (maxH.top() > minH.top()) {
                maxH.pop();
                minH.push(m);
                if (minH.size() > maxH.size()) {
                    maxH.push(minH.top());
                    minH.pop();
                }
            }
            if (maxH.size() - minH.size() > 1) {
                minH.push(maxH.top());
                maxH.pop();
            }
        }
        cout << maxH.top() << "\n";
    }
    return 0;
}