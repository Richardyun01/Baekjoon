#include <iostream>
using namespace std;
int main() {
    int n, num, ans=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        bool check = true;
        cin >> num;
        if (num <= 1) check = false;
        if (num == 2) check = true;
        for (int j = 2; j*j <= num; j++) {
            if (num % j == 0) check = false;
        }
        if (check == true) ans++;
    }
    cout << ans;
    return 0;
}