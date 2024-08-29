#include <iostream>
#include <stack>
using namespace std;
int main() {
    int n, ans = 0;
    stack<int> num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp != 0) num.push(tmp);
        else if (!num.empty()) num.pop();
    }
    while (!num.empty()) {
        ans += num.top();
        num.pop();
    }
    cout << ans;
    return 0;
}