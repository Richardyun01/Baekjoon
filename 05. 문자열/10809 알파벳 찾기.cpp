#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;
    int arr[26] = {0,};
    for (char i = 'a'; i <= 'z'; i++) {
        cout << (int)str.find(i) << " ";
    }
    return 0;
}