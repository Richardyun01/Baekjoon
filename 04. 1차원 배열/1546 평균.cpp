#include <stdio.h>

int main() {
    int n, max = 0;
    float ans = 0;
    scanf("%d", &n);
    
    int score[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
        if (max < score[i]) max = score[i];
    }
    
    for (int i = 0; i < n; i++)
        ans += (float)score[i] / max * 100;
    ans /= n;
    
    printf("%f\n", ans);
    
    return 0;
}