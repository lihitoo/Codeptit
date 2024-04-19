#include <stdio.h>
int tinhGiaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * tinhGiaiThua(n - 1);
    }
}
void inTamGiacPascal(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int giaTri = tinhGiaiThua(i) / (tinhGiaiThua(j) * tinhGiaiThua(i - j));
            printf("%d ", giaTri);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    inTamGiacPascal(n);
    return 0;
}
