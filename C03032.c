#include <stdio.h>
int laSoNguyenTo(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int tatCaChuSoLaSoNguyenTo(int n) {
    while (n > 0) {
        int chuSo = n % 10;
        if (!laSoNguyenTo(chuSo)) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}
int demSoNguyenToCoChuSoNguyenTo(int a, int b) {
    int dem = 0;
    for (int num = a; num <= b; num++) {
        if (laSoNguyenTo(num) && tatCaChuSoLaSoNguyenTo(num)) {
            dem++;
        }
    }
    return dem;
}

int main() {
    int soBoTest;
    scanf("%d", &soBoTest);
    for (int lanTest = 0; lanTest < soBoTest; lanTest++) {
        int a, b;
        scanf("%d %d", &a, &b);
        int ketQua = demSoNguyenToCoChuSoNguyenTo(a, b);
        printf("%d\n", ketQua);
    }
    return 0;
}
