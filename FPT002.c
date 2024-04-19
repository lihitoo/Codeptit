#include <stdio.h>

void nhan(int A[][100], int B[][100], int C[][100], int m, int n, int p, int q) {

    int D[100][100] = {0};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                D[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    int D_temp[100][100] = {0};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < p; k++) {
                D_temp[i][j] += D[i][k] * C[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", D_temp[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, p, q;
    scanf("%d %d %d %d", &m, &n,&p, &q);
    int A[100][100];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    int B[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    int C[100][100];
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &C[i][j]);
        }
    }
    nhan(A, B, C, m, n, p, q);

    return 0;
}
