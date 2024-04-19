#include <stdio.h>

int la_so_nguyen_to(int x) {
    if (x < 2) {
        return 0;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

void in_so_nguyen_to_trong_day(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        if (la_so_nguyen_to(arr[i])) {
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
        in_so_nguyen_to_trong_day(arr, N);
    }

    return 0;
}
