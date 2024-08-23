#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n, m;
    string s;
    cin >> n >> m;
    vector<string> unheard, unseen;
    for (int i = 0; i < n; i++) {
        cin >> s;
        unheard.push_back(s);
    }
    sort(unheard.begin(), unheard.end());
    for (int i = 0; i < m; i++) {
        cin >> s;
        if (binary_search(unheard.begin(), unheard.end(), s)) {
            unseen.push_back(s);
        }
    }
    sort(unseen.begin(), unseen.end());
    cout << unseen.size() << "\n";
    for (auto o : unseen) {
        cout << o << "\n";
    }
    return 0;
}
