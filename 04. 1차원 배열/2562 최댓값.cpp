#include <stdio.h>

int main() {
    int max = 0, arr[9], ans;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
            ans = i;
        }
    }
    printf("%d\n%d", max, ans+1);
    return 0;
}