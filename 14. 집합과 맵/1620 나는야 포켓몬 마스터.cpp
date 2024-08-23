#include <bits/stdc++.h>
using namespace std;
int n, m;
unordered_map<string, int> mon;
string str, tmp;
int main() {
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    vector<string> arr(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> str;
        mon[str] = i;
        arr[i] = str;
    }
    stringstream output;
    while (m--) {
        cin >> tmp;
        if (isdigit(tmp[0])) {
            output << arr[stoi(tmp)] << "\n";
        } else {
            output << mon[tmp] << "\n";
        }
    }
    cout << output.str();
    return 0;
}