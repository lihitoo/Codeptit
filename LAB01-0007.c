#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int tong = 0;
    for (int i = 0; i < n; i++) {
        int so;
        scanf("%d", &so);
        tong += so;
    }
    float giaTriTrungBinh = (float)tong / n;
    printf("%.3f\n", giaTriTrungBinh);
    return 0;
}
