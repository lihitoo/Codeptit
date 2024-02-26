#include <stdio.h>

int main() {
    int a, b, total;

    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    total = (b - a + 1) * (a + b) / 2;

    printf("%d\n", total);

    return 0;
}
