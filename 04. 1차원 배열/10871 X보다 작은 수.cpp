#include <stdio.h>

int main() {
    int n, a;
    scanf("%d %d", &n, &a);
    int num[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++) {
        if (num[i] < a) printf("%d ", num[i]);
    }
    return 0;
}