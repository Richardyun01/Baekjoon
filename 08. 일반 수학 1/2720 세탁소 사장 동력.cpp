#include <iostream>
using namespace std;
int main() {
    int n, c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int qr=0, dm=0, nk=0, pn=0;
        cin >> c;
        qr = c / 25;
        c -= qr * 25;
        dm = c / 10;
        c -= dm * 10;
        nk = c / 5;
        c -= nk * 5;
        pn = c;
        cout << qr << " " << dm << " " << nk << " " << pn << endl;
    }
    return 0;
}