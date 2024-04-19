#include <stdio.h>
int laSoDep(long long so) {
    
    int chuSo[18];
    int dem = 0;
    while (so > 0) {
        chuSo[dem] = so % 10;
        so /= 10;
        dem++;
    }
    if (dem >= 2) {
        if ((chuSo[0] == chuSo[dem - 1] * 2) || (chuSo[dem - 1] == chuSo[0] * 2)) {
            // Kiem tra so thuan nghich
            int laThuanNghich = 1;
            for (int i = 1; i <= dem / 2; i++) {
                if (chuSo[i] != chuSo[dem - i - 1]) {
                    laThuanNghich = 0;
                    break;
                }
            }

            return laThuanNghich;
        }
    }
    return 0;
}
int main() {
    int soBoTest;
    scanf("%d", &soBoTest);
    while (soBoTest--) {
        long long soNguyen;
        scanf("%lld", &soNguyen);
        if (laSoDep(soNguyen)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
