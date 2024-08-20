#include <stdio.h>

int main() {
    int total, n;
    scanf("%d %d", &total, &n);
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        sum += a*b;
    }
    
    if (total == sum) printf("Yes");
    else printf("No");
    
    return 0;
}