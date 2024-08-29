#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    int n;
    stack<int> stk;
    scanf("%d", &n);
    int input;
    while (n--) {
        scanf("%d", &input);
        switch (input) {
            case 1:
                int num;
                scanf("%d", &num);
                stk.push(num);
                break;
            case 2:
                if (!stk.empty()) {
                    printf("%d\n", stk.top());
                    stk.pop();
                } else {
                    printf("-1\n");
                }
                break;
            case 3:
                printf("%d\n", stk.size());
                break;
            case 4:
                if (!stk.empty()) 
                    printf("0\n");
                else 
                    printf("1\n");
                break;
            case 5:
                if (!stk.empty()) 
                    printf("%d\n", stk.top());
                else 
                    printf("-1\n");
                break;
        }
    }
    return 0;
}