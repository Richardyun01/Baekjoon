#include <iostream>
#include <stack>
using namespace std;
int main() {
    int n, tmp, cnt = 1;
    stack<int> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp == cnt) cnt++;
        else s.push(tmp);
        while (!s.empty() && s.top() == cnt) {
            s.pop();
            cnt++;
        }
    }
    if (s.empty()) cout << "Nice";
    else cout << "Sad";
    return 0;
}