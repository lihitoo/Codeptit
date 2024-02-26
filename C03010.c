#include <stdio.h>
int tinhGiaiThua(int x) {
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * tinhGiaiThua(x - 1);
    }
}
int tinhTongGiaiThuaChuSo(int n) {
    int tong = 0;
    while (n > 0) {
        int chuSo = n % 10;
        tong += tinhGiaiThua(chuSo);
        n /= 10;
    }
    return tong;
}
void lietKeSoStrong(int n) {
    for (int i = 1; i < n; i++) {
        if (i == tinhTongGiaiThuaChuSo(i)) {
            printf("%d ", i);
        }
    }
}
int main() {
    int N;
    scanf("%d", &N);

    lietKeSoStrong(N);

    return 0;
}
