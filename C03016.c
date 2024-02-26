#include <stdio.h>

int is_fibonacci(long long n) {
    long long a = 0, b = 1, c;
    while (a <= n) {
        if (a == n) {
            return 1; 
        }
        c = a + b;
        a = b;
        b = c;
    }
    return 0; 
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        long long n;
        scanf("%lld", &n);
        if (is_fibonacci(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
