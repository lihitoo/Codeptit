#include <stdio.h>

int main() {
    int N, temp, du, tongGiaiThua = 0, giaiThua;
    scanf("%d", &N);
    temp = N;
    while (temp > 0) {
        du = temp % 10;
        giaiThua = 1;
        for (int i = 1; i <= du; i++) {
            giaiThua *= i;
        }

        tongGiaiThua += giaiThua;
        temp /= 10;
    }
    if (tongGiaiThua == N) {
        printf("1\n");  
    } else {
        printf("0\n");  
    }

    return 0;
}
