#include <iostream>
#include <cmath>
using namespace std;
bool check(long long n) {
    if (n < 2) return false;
    int sqrtN = sqrt(n);
    for (long long i = 2; i <= sqrtN; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        while (!check(num)) {
            num++;
        }
        cout << num << endl;
    }
    return 0;
}