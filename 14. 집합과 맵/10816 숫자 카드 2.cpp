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
        int lower = lower_bound(arr, arr+n, num) - arr;
        int upper = upper_bound(arr, arr+n, num) - arr;
        cout << upper-lower << " ";
    }
    return 0;
}