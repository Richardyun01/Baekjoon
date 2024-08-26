#include <iostream>
using namespace std;
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    while (x != 0) {
        if (x >= y+z || y >= x+z || z >= x+y) 
            cout << "Invalid" << endl;
        else {
            if (x == y && y == z) cout << "Equilateral" << endl;
            else if (x != y && y != z && z != x) cout << "Scalene" << endl;
            else cout << "Isosceles" << endl;
        }
        cin >> x >> y >> z;
    }
    return 0;
}