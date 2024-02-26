#include <stdio.h>
int tinhGiaTriMoi(int n) {
    int giaTriMoi = 0;
    for (int i = 2; i  <= n; i++) {
    
        while (n % i == 0) {
            n /= i;
            giaTriMoi += i;
        }
    }
    return giaTriMoi;
}
int main() {
    int soBoTest;
    int giaTriMoi =0;
    scanf("%d", &soBoTest);
    while (soBoTest--) {
        int n;
        scanf("%d", &n);
        
        giaTriMoi += tinhGiaTriMoi(n);
        
    }
    printf("%d\n", giaTriMoi);
    return 0;
}
