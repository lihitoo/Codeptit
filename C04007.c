#include <stdio.h>
void chen_mang(int A[], int n, int B[], int m, int P) {
    for (int i = n + m - 1; i >= P + m; i--) {
        A[i] = A[i - m];
    }
    for (int i = 0; i < m; i++) {
        A[P + i] = B[i];
    }
}
int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int B[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    int P;
    scanf("%d", &P);
    chen_mang(A, n, B, m, P);

    for (int i = 0; i < n + m; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
