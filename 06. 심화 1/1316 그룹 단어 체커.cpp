#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[26] = {0,};
    char s[101];
    int k, pass, ret = 0;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < 26; j++) {
            a[j] = 0;
        }
        k = 1; pass = 1;
        while (s[k]) {
            if (a[s[k] - 'a']) {
                pass = 0;
                break;
            }
            if (s[k] != s[k-1])
                a[s[k-1] - 'a']++;
            k++;
        }
        ret += pass;
    }
    cout << ret;
    return 0;
}