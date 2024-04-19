#include <stdio.h>

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        long long a = 0, b = 1, temp;
        for (int i = 2; i <= n; i++) {
            temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int n;
        scanf("%d", &n);
        long long result = fibonacci(n);
        printf("%lld\n", result);
    }

    return 0;
}
