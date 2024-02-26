#include <stdio.h>
int tinhGiaTriMoi(int n) {
    int giaTriMoi = 1;
    for (int i = 2; i  <= n; i++) {
        if (n % i == 0) {
            giaTriMoi *= i;
            
            
        }
        while (n % i == 0) {
            n /= i;
            
        }
    }
    return giaTriMoi;
}
int main() {
    int soBoTest;
    scanf("%d", &soBoTest);
    while (soBoTest--) {
        int n;
        scanf("%d", &n);
        int giaTriMoi = tinhGiaTriMoi(n);
        printf("%d\n", giaTriMoi);
    }
    return 0;
}
