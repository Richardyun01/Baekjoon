#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (b+c < 60) {
        b += c;
    } else {
        int tmp = (b+c)/60;
        b = b+c-60*tmp;
        a += tmp;
    }
    if (a >= 24) a -= 24;
    printf("%d %d", a, b);
    
    return 0;
}