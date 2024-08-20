#include <iostream>
#include <algorithm>
using namespace std;
struct cord {
    int x;
    int y;
};

bool compare(cord a, cord b) {
    if (a.y == b.y) return a.x < b.x;
    else return a.y < b.y;
}

int main() {
    int n;
    cin >> n;
    cord arr[100001];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].x >> arr[i].y;
    }
    sort(arr, arr+n, compare);
    for (int i = 0; i < n; i++) {
        cout << arr[i].x << " " << arr[i].y << "\n";
    }
    return 0;
}