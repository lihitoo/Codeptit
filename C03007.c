#include <stdio.h>
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
int laSoThuanNghich(int num) {
    int soGoc = num;
    int soDaoNguoc = 0;
    while (num > 0) {
        soDaoNguoc = soDaoNguoc * 10 + num % 10;
        num /= 10;
    }
    return soGoc == soDaoNguoc;
}
void lietKeSoNguyenToVaThuanNghich(int a, int b) {
    int dem = 0;
    for (int num = a; num <= b; num++) {
        if (laSoNguyenTo(num) && laSoThuanNghich(num)) {
            printf("%d ", num);
            dem++;
            if (dem % 10 == 0) {
                printf("\n");
            }
        }
    }
    if (dem % 10 != 0) {
        printf("\n");
    }
}
int main() {
    int soLuongBoTest;
    scanf("%d", &soLuongBoTest);
    for (int lanTest = 0; lanTest < soLuongBoTest; lanTest++) {
        int a, b; 
        scanf("%d %d", &a, &b);
        lietKeSoNguyenToVaThuanNghich(a, b);
        if (lanTest < soLuongBoTest - 1) {
            printf("\n");
        }
    }
    return 0;
}
