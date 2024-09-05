#include <iostream>
using namespace std;
long long nCk(int m, int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * (m-i+1)/i;
    }
    return res;
}
int main() {
    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        cout << nCk(m, n) << "\n";
    }
    return 0;
}