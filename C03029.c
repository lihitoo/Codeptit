#include <stdio.h>
#include <string.h>

void kiemTraSoChanDacBiet(long long n, char result[]) {
    if (n % 2 != 0) {
        strcpy(result, "NO");
    } else {
        while (n > 0) {
            int digit = n % 10;
            if (digit % 2 != 0) {
                strcpy(result, "NO");
                return;
            }
            n /= 10;
        }
        strcpy(result, "YES");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    for (int test_case = 0; test_case < t; test_case++) {
        long long N; 
        scanf("%lld", &N);
        char result[4];
        kiemTraSoChanDacBiet(N, result);
        printf("%s\n", result);
    }

    return 0;
}
