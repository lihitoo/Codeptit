#include <stdio.h>

void tach_mang_chan_le(int A[], int n) {
    int mang_chan[n], mang_le[n];
    int count_chan = 0, count_le = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            mang_chan[count_chan++] = A[i];
        } else {
            mang_le[count_le++] = A[i];
        }
    }
    for (int i = 0; i < count_chan; i++) {
        printf("%d ", mang_chan[i]);
    }
    printf("\n");
    for (int i = 0; i < count_le; i++) {
        printf("%d ", mang_le[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    tach_mang_chan_le(A, n);
    return 0;
}
