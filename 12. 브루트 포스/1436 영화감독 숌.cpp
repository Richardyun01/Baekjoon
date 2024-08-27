#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, title, check = 0;
    string str;
    cin >> n;
    for (title = 666; ; title++) {
        str = to_string(title);
        if (str.find("666") != -1) {
            check++;
            if (check == n) {
                cout << title;
                break;
            }
        }
    }
    return 0;
}