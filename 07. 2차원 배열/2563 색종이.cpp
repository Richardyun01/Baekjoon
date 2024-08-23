#include <iostream>
using namespace std;
int main() {
    int arr[101][101] = {0,};
    int a, b, n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        for (int j = a; j < a+10; j++) {
            for (int k = b; k < b+10; k++) {
                arr[j][k] = 1;
            }
        }
    }
    for (int i = 1; i < 101; i++) {
        for (int j = 1; j < 101; j++) {
            if (arr[i][j] == 1)
                ans++;
        }
    }
    cout << ans;
    return 0;
}