#include <bits/stdc++.h>
using namespace std;
long long memo[1500001];
int pisaro = 1000000;
void fib() {
    memo[0] = 0;
    memo[1] = 1;
    for (int i = 0; i < 1500000; i++) {
        memo[i+2] = (memo[i+1] + memo[i]) % pisaro;
    }
}
int main() {
    long long n;
    cin >> n;
    fib();
    cout << memo[n%1500000];
    return 0;
}