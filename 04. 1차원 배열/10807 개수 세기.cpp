#include <stdio.h>

int main() {
    int n, a, ans=0;
    int arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &a);
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) ans++;
    }
    printf("%d", ans);
    return 0;
}