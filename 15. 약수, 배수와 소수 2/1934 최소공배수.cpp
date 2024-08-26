#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++) {
        int abs = 1;
        cin >> a >> b;
        for (int j = 2; j <= min(a, b); j++) {
            if (a % j == 0 && b % j == 0) abs = j;
        }
        cout << a*b/abs << endl;
    }
    return 0;
}