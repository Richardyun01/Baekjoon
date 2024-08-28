#include <iostream>
#include <cmath>
using namespace std;
bool net(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main() {
    int n = 1;
    while (true) {
        cin >> n;
        if (n == 0) break;
        int cnt = 0;
        if (!n) break;
        for (int i = n+1; i <= 2*n; i++)
            if (net(i)) cnt++;
        cout << cnt << endl;
    }
    return 0;
}