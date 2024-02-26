#include <stdio.h>

int is_prime(int num) {
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

int is_fibonacci(int num) {
    int a = 0, b = 1, c;
    while (a <= num) {
        if (a == num) {
            return 1;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void beautiful_numbers_between(int a, int b) {
    for (int num = a; num <= b; num++) {
        if (is_prime(num) && is_fibonacci(sum_of_digits(num))) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>b) {
      int temp = a;
      a = b;
      b = temp;
    }
    beautiful_numbers_between(a, b);
    return 0;
}
