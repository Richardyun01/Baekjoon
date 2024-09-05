#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, k[51];
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> k[i];
    }
    sort(k, k+t);
    if (t == 1) cout << pow(k[0], 2);
    else cout << k[0]*k[t-1];
    return 0;
}