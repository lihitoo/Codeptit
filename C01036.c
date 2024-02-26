#include <stdio.h>

int main() {
    int N, d, p;
    scanf("%d", &N);
    p = 1;

    while (N > 0) {
        d = N % 10;
        p *= d;
        N /= 10;
    }

	printf("%d\n", p);

    return 0;
}
