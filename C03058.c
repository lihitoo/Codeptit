#include <stdio.h>

long long ucln(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long findSmallestMultiple(long n) {
    long long result = 1;
    for (long long i = 2; i <= n; i++) {
        result *= i / ucln(i, result);
    }
    return result;
}
int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        long long n;
        scanf("%lld", &n);
        long long result = findSmallestMultiple(n);
        printf("%lld\n", result);
    }

    return 0;
}
