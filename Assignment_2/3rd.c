#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int even_sum = 0;
    int odd_sum = 0;
    for (int i = 0; i < n; i++) {
        int v;
        scanf("%d", &v);
        if (v % 2 == 0) {
            even_sum += v;
        } else {
            odd_sum += v;
        }
    }
    printf("%d %d\n", even_sum, odd_sum);
    return 0;
}