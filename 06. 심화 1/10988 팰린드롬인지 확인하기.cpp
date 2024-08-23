#include <iostream>
using namespace std;
int main() {
	string str;
    cin >> str;
    bool check = true;
    for (int i = 0; i < str.size()/2; i++) {
        if (str[i] != str[str.size()-i-1]) {
            check = false;
        }
    }
    if (check == true) cout << "1";
    else cout << "0";
	return 0;
}
