#include <stdio.h>
int isPrime(int num) {
    if (num < 2) {
        return 0;  
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}
int tong(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return (sum % 5 == 0);
}
void findNumbers(int n) {
    int count = 0;
    for (int num = 2; num < n; num++) {
        if (isPrime(num) && tong(num)) {
            printf("%d ", num);
            count++;
        }
    }
        printf("\n%d\n", count);
}
int main() {
    int n;
    scanf("%d", &n);
    findNumbers(n);
    return 0;
}
