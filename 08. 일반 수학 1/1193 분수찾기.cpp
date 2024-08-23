#include <iostream>
using namespace std;
int main() {
    int n, k=1;
    cin >> n;
    while (1) {
        if ((k-1)*k/2 < n && n <= k*(k+1)/2)
            break;
        k++;
    }
    if (k % 2 != 0) {
        int i = k*(k+1)/2;
        cout << i-n+1 << "/" << k-i+n;
    } else {
        int i = k*(k+1)/2;
        cout << k-i+n << "/" << i-n+1;
    }
    return 0;
}