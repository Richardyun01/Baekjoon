#include <iostream>

using namespace std;

int main() {
    int n, ans = 0;
    string str;
    cin >> n >> str;
    for (int i = 0; i < n; i++) {
        ans += (int)str[i] - '0';
    }
    cout << ans;
}