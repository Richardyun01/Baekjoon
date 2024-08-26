#include <iostream>
using namespace std;
int main() {
    int n, m, sum=0, min=-1;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        if (i < 2) continue;
        bool check = true;
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                check = false;
                break;
            }
        }
        if (check == true) {
            sum += i;
            if (i < min || min == -1) min = i;
        }
    }
    if (sum == 0)
        cout << "-1";
    else
        cout << sum << "\n" << min;
    return 0;
}