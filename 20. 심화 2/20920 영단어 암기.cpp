#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
bool compare(string a, string b) {
    if (a.size() == b.size() && mp[a] == mp[b]) {
        return a < b;
    } else if (mp[a] == mp[b]) {
        return a.size() > b.size();
    }
    return mp[a] > mp[b];
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<string> str;
    string v;
    for (int i = 0; i < n; i++) {
        cin >> v;
        if (v.size() < m) continue;
        if (mp.find(v) == mp.end()) {
            mp[v] = 0;
            str.push_back(v);
        }
        mp[v]++;
    }
    sort(str.begin(), str.end(), compare);
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << "\n";
    }
    return 0;
}