#include <stdio.h>
int tinhTongChuSo(int n) {
    int tong = 0;
    while (n > 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int tong_a = tinhTongChuSo(a);
    int tong_b = tinhTongChuSo(b);
    if (tong_a < tong_b || (tong_a == tong_b)) {
        printf("%d %d\n", a, b);
    } else {
        printf("%d %d\n", b, a);
    }
    return 0;
}
