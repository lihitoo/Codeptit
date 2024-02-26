#include <stdio.h>
#include <math.h>
int laSoHoanHao(int num) {
    int sum = 1;

    for (int i = 2; i <= sqrt(num) ; i++) {
        if (num % i == 0) {
            sum += i;
            if(i != num/i) sum+= num/i;
        }
    }

    if(sum == num && num != 1){
        return 1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        if (laSoHoanHao(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
