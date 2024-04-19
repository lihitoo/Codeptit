#include <stdio.h>
void dich_trai_mang(int arr[], int n, int k) {
    k = k % n;  
    for (int i = 0; i < k; i++) {
        int temp = arr[n-1];
        for (int j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    int k;
    scanf("%d", &k);
    dich_trai_mang(A, n, k);
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
