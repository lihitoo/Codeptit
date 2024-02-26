#include <stdio.h>
int findGCD(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int check(int x, int y) {
    return findGCD(x, y) == 1;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        for (int j = i + 1; j <= b; j++) {
            if (check(i, j)) {
                printf("(%d,%d)\n", i, j);
            }
        }
    }

    return 0;
}
