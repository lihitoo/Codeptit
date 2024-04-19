#include <stdio.h>

void in_so_chan_trong_day(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
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
        in_so_chan_trong_day(arr, N);
    }
    return 0;
}
