#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, tmp, range, mid = 0, mostVal, mean = 0;
    int most = -9999;
    int num[8001] = {0,};
    bool notFirst = false;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
        mean += tmp;
        num[tmp+4000]++;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 8001; i++) {
        if (num[i] == 0) continue;
        if (num[i] == most) {
            if (notFirst) {
                mostVal = i - 4000;
                notFirst = false;
            }
        }
        if (num[i] > most) {
            most = num[i];
            mostVal = i - 4000;
            notFirst = true;
        }
    }
    mid = v[v.size()/2];
    mean = round((float)mean / n);
    range = v.back() - v.front();
    cout << mean << "\n" << mid << "\n" << mostVal << "\n" << range;
    return 0;
}