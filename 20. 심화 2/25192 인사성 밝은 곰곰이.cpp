#include <iostream>
#include <set>
using namespace std;
int main() {
    int n, ans = 0;
    set<string> check;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == "ENTER") {
            check.clear();
        } else {
            if (check.find(str) == check.end()) {
                check.insert(str);
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}