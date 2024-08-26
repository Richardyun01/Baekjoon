#include <iostream>
using namespace std;
int main() {
    int n, m, arr[1000], k = 0, cnt = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            arr[k] = i;
            k++;
            cnt++;
        }
    }
    if (cnt >= m) cout << arr[m-1];
    else cout << 0;
    return 0;
}