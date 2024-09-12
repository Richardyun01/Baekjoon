#include <iostream>
using namespace std;
const int MOD = 1000000007;
long long modFact(long long n, long long mod) {
    long long res = 1;
    for (long long i = 2; i <= n; i++) {
        res = (res * i) % mod;
    }
    return res;
}
long long modInverse(long long a, long long mod) {
    long long res = 1, pow = mod - 2;
    while (pow) {
        if (pow % 2) res = (res * a) % mod;
        a = (a*a) % mod;
        pow /= 2;
    }
    return res;
}
int main() {
    long long n, k, ans;
    cin >> n >> k;
    if (k == 0 || k == n) ans = 1;
    else {
        long long num = modFact(n, MOD);
        long long denom = (modFact(k, MOD) * modFact(n-k, MOD)) % MOD;
        ans = (num * modInverse(denom, MOD)) % MOD;
    }
    cout << ans;
    return 0;
}