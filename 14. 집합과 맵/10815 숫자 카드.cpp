#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
    int n, m, num, arr[500001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &num);
        if (binary_search(arr, arr+n, num)) cout << "1 ";
        else cout << "0 ";
    }
    return 0;
}