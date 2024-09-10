#include <bits/stdc++.h>
using namespace std;
int recursion(string &s, int l, int r, int &cnt) {
    cnt++;
    if (l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1, cnt);
}
int isPalindrome(string &s, int &cnt) {
    return recursion(s, 0, s.size()-1, cnt);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, cnt;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        cin >> str;
        cout << isPalindrome(str, cnt) << " " << cnt << "\n";
    }
    return 0;
}
