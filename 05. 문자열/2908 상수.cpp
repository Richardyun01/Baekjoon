#include <iostream>
#include <string>
using namespace std;
int main() {
    string x, y;
    cin >> x >> y;
    string max;
    for (int i = 2; i >= 0; i--) {
        if (x[i] > y[i]) {
            max = x;
            break;
        } else if (x[i] < y[i]) {
            max = y;
            break;
        }
    }
    cout << max[2] << max[1] << max[0];
    return 0;
}