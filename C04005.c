#include <stdio.h>

void tim_so_lon_nhat_va_vi_tri(int arr[], int N) {
    int max = arr[0];
    int vi_tri_max[N];
    int count = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
            count = 0; 
        }
        if (arr[i] == max) {
            vi_tri_max[count++] = i;
        }
    }
    printf("%d\n", max);
    for (int i = 0; i < count; i++) {
        printf("%d ", vi_tri_max[i]);
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);
        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }
        tim_so_lon_nhat_va_vi_tri(arr, N);
    }
    return 0;
}
