#include <iostream>
#include <deque>
using namespace std;
int main() {
    int n, tmp;
    cin >> n;
    deque<pair<int, int>> dq;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        dq.push_back(make_pair(tmp, i+1));
    }
    while (!dq.empty()) {
        int now = dq.front().first;
        cout << dq.front().second << " ";
        dq.pop_front();
        if (dq.empty()) break;
        if (now > 0) {
            for (int i = 0; i < now-1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            for (int i = 0; i < -1 * now; i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    return 0;
}