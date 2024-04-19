#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] == A[j]) {
                A[j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (A[i] != -1) {
            printf("%d ", A[i]);
        }
    }
    return 0;
}
