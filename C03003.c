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
    for (int i = 2; i < 10000005; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
            N--;
        }
        if(N == 0) return 0;
    }

    return 0;
}
