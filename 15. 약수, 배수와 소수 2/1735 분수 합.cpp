#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main() {
    int n1, n2, m1, m2;
    cin >> n1 >> n2 >> m1 >> m2;
    int den = n2*m2/gcd(n2, m2); // 분모
    int num = n1*(den/n2)+m1*(den/m2); // 분자
    int tmp = gcd(den, num);
    cout << num / tmp << " " << den / tmp;
    return 0;
}