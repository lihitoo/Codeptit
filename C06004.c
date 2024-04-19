#include <stdio.h>
#include <ctype.h>

void phan_tich_xau(char S[]) {
    int so_chu_cai = 0;
    int so_chu_so = 0;
    int so_ky_tu_khac = 0;

    for (int i = 0; S[i] != '\0'; i++) {
        if (isalpha(S[i])) {
            so_chu_cai++;
        } else if (isdigit(S[i])) {
            so_chu_so++;
        } else {
            so_ky_tu_khac++;
        }
    }

    printf("%d ", so_chu_cai);
    printf("%d ", so_chu_so);
    printf("%d ", so_ky_tu_khac);
}
int main() {
    char xau[200];
    scanf(" %[^\n]", xau);
    phan_tich_xau(xau);

    return 0;
}
