#include <iostream>
using namespace std;
int main() {
    int chess[6] = {1, 1, 2, 2, 2, 8};
    int n;
    for (int i = 0; i < 6; i++) {
        cin >> n;
        if (n != chess[i]) cout << chess[i]-n << " ";
        else cout << "0 ";
    }
    return 0;
}