#include <iostream>
using namespace std;
int main() {
    int n, k, ans;
    cin >> n >> k;
    if (k == 0) ans = 1;
    else {
        int tmp1=1, tmp2=1, tmp3=1;
        for (int i = n; i >= 1; i--) {
            tmp1 *= i;
        }
        for (int i = k; i >= 1; i--) {
            tmp2 *= i;
        }
        for (int i = n-k; i >= 1; i--) {
            tmp3 *= i;
        }
        ans = tmp1 / (tmp2 * tmp3);
    }
    cout << ans;
    return 0;
}