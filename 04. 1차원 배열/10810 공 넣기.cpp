#include <stdio.h>

int main() {
    int n, m;
    int arr[101] = {0,};
    int a, b, c;
    
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &a, &b, &c);
        for (int j = a; j <= b; j++) {
            arr[j] = c;
        }
    }
    
    for (int i = 1; i <= n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}