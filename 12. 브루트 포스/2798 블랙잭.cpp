#include <iostream>
using namespace std;
int main() {
    int arr[100];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int res = 0, sum = 0;
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                sum = arr[i] + arr[j] + arr[k];
                if (sum > res && sum <= m) res = sum;
            }
        }
    }
    cout << res;
    return 0;
}