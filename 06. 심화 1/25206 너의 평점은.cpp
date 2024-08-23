#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, float> m;
    m["A+"] = 4.5; m["A0"] = 4.0;
    m["B+"] = 3.5; m["B0"] = 3.0;
    m["C+"] = 2.5; m["C0"] = 2.0;
    m["D+"] = 1.5; m["D0"] = 1.0;
    m["F"] = 0;
    
    int n;
    string str, grade;
    float a, ans;
    while (cin >> str >> a >> grade) {
        if (grade == "P") continue;
        ans += a*m[grade];
        n += a;
    }
    cout << ans / n;
    
    return 0;
}