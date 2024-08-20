#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        printf("%d", 10000+a*1000);
    } else if (a != b && b != c && c != a) {
        int max = a;
        if (max < b) max = b;
        if (max < c) max = c;
        printf("%d", max*100);
    } else {
        int tmp;
        if (a == b || a == c) tmp = a;
        else if (b == c) tmp = b;
        printf("%d", 1000+tmp*100);
    }
    
    return 0;
}