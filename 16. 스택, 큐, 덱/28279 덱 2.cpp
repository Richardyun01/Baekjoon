#include <iostream>
#include <deque>
using namespace std;
int n, cmd, num;
deque<int> dq;
int main() {
	cin.tie(0); 
	cout.tie(0); 
    ios::sync_with_stdio(false);
    cin >> n;
    while (n--) {
        cin >> cmd;
        switch (cmd) {
            case 1:
                cin >> num;
                dq.push_front(num);
                break;
            case 2:
                cin >> num;
                dq.push_back(num);
                break;
            case 3:
                if (dq.empty()) cout << "-1\n";
                else {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
                break;
            case 4:
                if (dq.empty()) cout << "-1\n";
                else {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
                break;
            case 5:
                cout << dq.size() << "\n";
                break;
            case 6:
                if (dq.empty()) cout << "1\n";
                else cout << "0\n";
                break;
            case 7:
                if (dq.empty()) cout << "-1\n";
                else cout << dq.front() << "\n";
                break;
            case 8:
                if (dq.empty()) cout << "-1\n";
                else cout << dq.back() << "\n";
                break;
        }
    }
    return 0;
}
