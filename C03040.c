#include <stdio.h>
int tinhTongChuSo(int num) {
    int tong = 0;
    while (num > 0) {
        tong += num % 10;
        num /= 10;
    }
    return tong;
}
int laSoNguyenTo(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int tinhTongChuSoThuaSoNguyenTo(int num) {
    int tong = 0;
    for (int i = 2; i <= num; i++) {
        while (num % i == 0 && laSoNguyenTo(i)) {
            tong += tinhTongChuSo(i);
            num /= i;
        }
    }
    return tong;
}
int laSoSmith(int num) {
    return tinhTongChuSo(num) == tinhTongChuSoThuaSoNguyenTo(num);
}
int main() {
    int N;
    scanf("%d", &N);
    if (laSoSmith(N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
