#include <stdio.h>

int laSoDep(int num) {
    int soBanDau = num;
    int soNguoc = 0;
    int chuSoCuoi;
    int tong =0;
    int check =0 ;
    while (num > 0) {
        chuSoCuoi = num % 10;
        tong += chuSoCuoi;
        if(chuSoCuoi==6) check=1;
        soNguoc = soNguoc * 10 + chuSoCuoi;
        num /= 10;
    }

    if( (soBanDau == soNguoc) && (tong % 10 == 8) && check != 0) return 1;
    return 0;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
     int dem = 0;

    for (int num = a; num <= b; num++) {
        if (laSoDep(num)) {
            dem++;
        }
    }

    printf("%d\n", dem);

    return 0;
}
