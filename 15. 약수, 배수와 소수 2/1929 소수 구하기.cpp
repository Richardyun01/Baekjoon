#include <iostream>
#include <cmath>
using namespace std;
bool net(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        if (net(i)) cout << i << endl;
    }
    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;
void net(vector<bool>& is_prime, int max_n) {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= max_n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max_n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    const int MAX_N = 1000000;
    vector<bool> is_prime(MAX_N + 1, true);
    net(is_prime, MAX_N);
    for (int i = n; i <= m; i++) {
        if (is_prime[i]) cout << i << "\n";
    }
    return 0;
}
*/