#include <stdio.h>

int isPrime(int number) {
    if (number < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1; 
}
void listPrimePairs(int N) {
    for (int i = 2; i <= N / 2; i++) {
        if (isPrime(i) && isPrime(N - i)) {
            printf("%d %d ", i, N - i);
        }
    }
    printf("\n");
}
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
            listPrimePairs(N);     
    }
    return 0;
}
