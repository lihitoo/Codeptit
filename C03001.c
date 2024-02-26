#include <stdio.h>

int main() {
    int T, num;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        scanf("%d", &num);
        int sum = 0;
        int temp = num;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum % 10 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
