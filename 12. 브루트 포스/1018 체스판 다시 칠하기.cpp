#include <iostream>
#include <algorithm>
using namespace std;
char bw[8][8] ={
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B'
};
char wb[8][8] ={
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W',
    'W','B','W','B','W','B','W','B',
    'B','W','B','W','B','W','B','W'
};
int main() {
    int n, m, tmp = 0, ans = 64;
    char org[50][50];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> org[i][j];
        }
    }
    for (int i = 0; i <= n-8; i++) {
        for (int j = 0; j <= m-8; j++) {
            int cntW = 0, cntB = 0;
            for (int k = 0; k < 8; k++) {
                for (int l = 0; l < 8; l++) {
                    if (org[i+k][j+l] != bw[k][l])
                        cntB++;
                    if (org[i+k][j+l] != wb[k][l])
                        cntW++;
                }
            }
            tmp = min(cntB, cntW);
            if (tmp <= ans)
                ans = tmp;
        }
    }
    cout << ans;
}