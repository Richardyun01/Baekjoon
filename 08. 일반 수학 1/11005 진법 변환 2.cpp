#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int N, B;
    cin >> N >> B;
    string str;
    while (N != 0) {
        int tmp = N % B;
        if (tmp > 9) {
            tmp = tmp - 10 + 'A';
            str += tmp;
        } else {
            str += ('0' + tmp);
        }
        N /= B;
    }
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}