#include <stdio.h>

int la_day_doi_xung(int arr[], int N) {
    for (int i = 0, j = N - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            return 0;
        }
    }
    return 1;
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

        if (la_day_doi_xung(arr, N)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
