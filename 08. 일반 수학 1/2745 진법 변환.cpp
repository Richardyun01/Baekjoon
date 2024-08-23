#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string N;
    int B, res=0;
    cin >> N >> B;
    for (int i = 0; i < N.size(); i++) {
        char ch = N[N.size()-1-i];
        if ('0' <= ch && ch <= '9')
            res += (ch-'0') * pow(B, i);
        else
            res += (ch-'A'+10) * pow(B, i);
    }
    cout << res;
}