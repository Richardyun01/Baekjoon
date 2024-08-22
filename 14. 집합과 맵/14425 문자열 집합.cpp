#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, m, ans=0;
    string str, arr[10001];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i = 0; i < m; i++) {
        cin >> str;
        if (binary_search(arr, arr+n, str)) ans++;
    }
    cout << ans;
    return 0;
}