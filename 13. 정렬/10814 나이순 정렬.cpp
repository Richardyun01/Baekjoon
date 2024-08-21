#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool cmp(pair<int, string> age, pair<int, string> name) {
    return age.first < name.first;
}
int main() {
    int n, age;
    string name;
    vector<pair<int, string>> mem;
    cin >> n;
    for (auto i = 0; i < n; i++) {
        cin >> age >> name;
        mem.push_back(make_pair(age, name));
    }
    stable_sort(mem.begin(), mem.end(), cmp);
    for (auto i = 0; i < mem.size(); i++) {
        cout << mem[i].first << " " << mem[i].second << "\n";
    }
    return 0;
}