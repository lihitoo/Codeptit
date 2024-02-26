#include <stdio.h>

int kiemTraFibonacci(int n) {
    int a = 0, b = 1;
    while (b < n) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return (b == n);
}

int main() {
    int num;
    scanf("%d", &num);

    if (kiemTraFibonacci(num)) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}
