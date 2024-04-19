#include <stdio.h>
void tim_gia_tri_nho_nhat_nho_thu_hai(int A[], int n) {
    int min1, min2;
    if (A[0] > A[1]) {
        min1 = A[0];
        min2 = A[1];
    } else {
        min1 = A[1];
        min2 = A[0];
    }
    for (int i = 2; i < n; i++) {
        if (A[i] > min1) {
            min2 = min1;
            min1 = A[i];
        } else if (A[i] > min2 && A[i] != min1) {
            min2 = A[i];
        }
    }
    printf("%d ", min1);
    printf("%d\n", min2);
}
int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    tim_gia_tri_nho_nhat_nho_thu_hai(A, n);
    return 0;
}
