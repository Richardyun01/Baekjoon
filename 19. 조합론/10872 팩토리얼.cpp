#include <iostream>
using namespace std;
long long out = 1;
int main() {
    int n;
    cin >> n;
    if (n == 0) cout << 1;
    else {
        for (int i = 1; i <= n; i++) {
            out *= i;
        }
        cout << out;
    }
    return 0;
}