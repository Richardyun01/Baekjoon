#include <iostream>
using namespace std;
int main() {
    int a, b, v;
    cin >> a >> b >> v;
    int height = v - a;
    int climb = a - b;
    int days = (height + climb - 1) / climb + 1; 
    cout << days;
    return 0;
}