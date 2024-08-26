#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, m, arr[200001], cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int j = 0; j < m; j++) {
        int num;
        cin >> num ;
        if (binary_search(arr, arr+n, num)) cnt++;
    }
    cout << n+m-cnt*2;
    return 0;
}