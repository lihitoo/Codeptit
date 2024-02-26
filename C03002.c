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

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 2; i < N; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
