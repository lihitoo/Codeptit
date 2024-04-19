#include <stdio.h>
long long replaceDigits(long long num, int replaceFrom, int replaceTo) {
    long long result = 0;
    long long multiplier = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit == replaceFrom) {
            digit = replaceTo;
        }
        result = result + digit * multiplier;
        multiplier *= 10;
        num /= 10;
    }
    return result;
}
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        long long x1, x2;
        scanf("%lld %lld", &x1, &x2);
        long long minSum = replaceDigits(x1, 6, 5) + replaceDigits(x2, 6, 5);
        long long maxSum = replaceDigits(x1, 5, 6) + replaceDigits(x2, 5, 6);
         printf("%lld %lld\n", minSum, maxSum);
    }
    return 0;
}
