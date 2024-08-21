#include <iostream>
#include <algorithm>
using namespace std;
string word[20001];
bool cmp(string a, string b) {
    if (a.size() == b.size()) return a < b;
    else return a.size() < b.size();
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> word[i];
    }
    sort(word, word+n, cmp);
    for (int i = 0; i < n; i++) {
        if (word[i] == word[i-1]) continue;
        cout << word[i] << endl;
    }
    return 0;
}
