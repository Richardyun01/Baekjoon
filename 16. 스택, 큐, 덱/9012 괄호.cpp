#include <iostream>
#include <stack>
using namespace std;
string check(string str) {
    stack<char> ps;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            ps.push('(');
        } else {
            if (ps.empty()) return "NO";
            ps.pop();
        }
    }
    if (ps.empty()) {
        return "YES";
    } else {
        return "NO";
    }
}
int main() {
    int n;
    string ps;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ps;
        cout << check(ps) << "\n";
    }
}