#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main() {
    long long a, b;
    cin >> a >> b;
    cout << a*b/gcd(a, b);
    return 0;
}