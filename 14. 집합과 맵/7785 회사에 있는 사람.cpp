#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n;
    map<string, string, greater<string>> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name, state;
        cin >> name >> state;
        arr[name] = state;
    }
    map<string, string>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++) {
        if (it->second == "enter") {
            cout << it->first << "\n";
        }
    }
    return 0;
}