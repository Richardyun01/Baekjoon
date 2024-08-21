#include <stdio.h>

int main() {
    int n, m;
    int a, b;
    scanf("%d %d", &n, &m);
    
    int arr[n+1];
    for (int i = 1; i < n+1; i++) {
        arr[i] = i;
    }
    
    while (m--) {
        scanf("%d %d", &a, &b);
        if (a != b) {
            for (int i = 0; i <= (b-a)/2; i++) {
                int tmp = arr[a+i];
                arr[a+i] = arr[b-i];
                arr[b-i] = tmp;
            }
        }
    }
    
    for (int i = 1; i < n+1; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}