#include <stdio.h>

void phanTichThuaSoNguyenTo(int n) {
    for (int i = 2; i <= n; i++) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            if(n!=1) printf("%d^%d * ", i, count);
            else printf("%d^%d", i, count);
        }
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    for (int test_case = 1; test_case <= t; test_case++) {
        int n; 
        scanf("%d", &n);
        printf("%d = ",n);
        phanTichThuaSoNguyenTo(n);
    }
    return 0;
}
