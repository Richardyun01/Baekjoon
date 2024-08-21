#include <stdio.h>
#include <algorithm>

int main() {
    int n;
    scanf("%d", &n);
    int* arr = new int[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    std::sort(arr, arr + n);
    printf("%d %d", arr[0], arr[n - 1]);
    delete[] arr;
    
    return 0;
}