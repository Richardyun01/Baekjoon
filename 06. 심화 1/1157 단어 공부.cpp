#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    int arr[26] = {0,};
    int max = -1, idx = -1;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] < 97) arr[str[i] - 65]++;
        else arr[str[i] - 97]++;
    }
    for (int i = 0; i < 26; i++) {
        if (max < arr[i]) {
            max = arr[i];
            idx = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (idx == i) continue;
        if (max == arr[i]) {
            cout << "?";
            return 0;
        }
    }
    cout << (char)(idx+65);
    return 0;
}