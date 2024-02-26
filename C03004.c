#include <stdio.h>

long long findGCD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long findLCM(long long a, long long b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n",findGCD(a, b));
    printf("%lld\n",findLCM(a, b));

    return 0;
}
