#include <iostream>
#include <algorithm>
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
    int n;
    int tree[100001];
    int dist[100001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tree[i];
    }
    sort(tree, tree+n);
    for (int i = 0; i < n-1; i++) {
        dist[i] = tree[i+1] - tree[i];
    }
    int min = dist[0];
    for (int i = 0; i < n-1; i++) {
        min = gcd(min, dist[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n-1; i++) {
        cnt += (dist[i]/min)-1;
    }
    cout << cnt;
    return 0;
}