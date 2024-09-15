#include <bits/stdc++.h>
#define INF 987654321
using namespace std;
int arr[101][101];
int main() {
    int n, m, a, b, c;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            arr[i][j] = INF;
        }
    }
    for (int i = 1; i <= n; i++) {
        arr[i][i] = 0;
    }
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        if (arr[a][b] > c) arr[a][b] = c;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                if (arr[j][k] > arr[j][i] + arr[i][k]) arr[j][k] = arr[j][i] + arr[i][k]; 
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr[i][j] == INF) cout << "0 ";
            else cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}