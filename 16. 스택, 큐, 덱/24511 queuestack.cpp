#include <iostream>
#include <deque>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    deque<int> dq;
    bool arr[100001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        if (arr[i]) continue;
        dq.push_back(b);
    }
    cin >> m;
    while (m--) {
        int c;
        cin >> c;
        dq.push_front(c);
        cout << dq.back() << " ";
        dq.pop_back();
    }
    return 0;
}