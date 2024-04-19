#include <stdio.h>
void sinh(int n, int temp, int l) {
    if (l == n) {
        printf("%d ", temp);
        return;
    }
    for (int i = 0; i <= 9; i++) {
        if (i >= temp % 10) {
            sinh(n, temp * 10 + i, l + 1);
        }
    }
}
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        for (int j = 1; j <= 9; j++) {
            sinh(n, j, 1);
        }
        printf("\n");
    }
    return 0;
}
