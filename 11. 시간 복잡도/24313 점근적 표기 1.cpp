#include <iostream>
using namespace std;
int main() {
    int a1, a0, n, b0;
    cin >> a1 >> a0 >> n >> b0;
    cout << (a1*b0+a0 <= n*b0 && a1 <= n);
    return 0;
}