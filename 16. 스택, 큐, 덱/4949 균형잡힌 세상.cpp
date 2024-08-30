#include <iostream>
#include <stack>
using namespace std;
int main() {
    while (true) {
        string input;
        stack<char> stk;
        getline(cin, input);
        bool result = true;
        if (input.length() == 1 && input[0] == '.') {
            break;
        }
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == '[' || input[i] == '(') {
                stk.push(input[i]);
            }
            if (input[i] == ']') {
                if (!stk.empty() && stk.top() == '[') {
                    stk.pop();
                } else {
                    result = false;
                    break;
                }
            } else if (input[i] == ')') {
                if (!stk.empty() && stk.top() == '(') {
                    stk.pop();
                } else {
                    result = false;
                    break;
                }
            }
        }
        if (stk.empty() && result) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
    return 0;
}