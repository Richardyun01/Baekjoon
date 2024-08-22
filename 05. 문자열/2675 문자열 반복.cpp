#include <iostream>
using namespace std;
int main() {
    int t, n;
    string str;
    cin >> t;
    while(t--) {
        cin >> n >> str;
        for (int i = 0; i < str.size(); i++) {
            for (int j = 0; j < n; j++) {
                cout << str[i];
            }
        }
        cout << "\n";
    }
    return 0;
}