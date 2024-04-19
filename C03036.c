#include <stdio.h>

int laSoThuanNghich(long long num) {
    long long soGoc = num;
    long long soDaoNguoc = 0;
    while (num > 0) {
        soDaoNguoc = soDaoNguoc * 10 + num % 10;
        num /= 10;
    }
    return soGoc == soDaoNguoc;
}
int tatCaChuSoLaSoLe(long long num) {
    while (num > 0) {
        long long chuSo = num % 10;
        if (chuSo % 2 == 0) {
            return 0;
        }
        num /= 10;
    }
    return 1;
}
int tongChuSoLaSoLe(long num) {
    int tong = 0;
    while (num > 0) {
        tong += num % 10;
        num /= 10;
    }
    return tong % 2 != 0;
}
int kiemTraDieuKien(long long N) {
    return laSoThuanNghich(N) && tatCaChuSoLaSoLe(N) && tongChuSoLaSoLe(N);
}
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0;i < t; i++) {
        long long N; 
        scanf("%lld", &N);

        printf("%s\n", kiemTraDieuKien(N) ? "YES" : "NO");
    }
    return 0;
}
