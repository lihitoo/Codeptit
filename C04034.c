#include <stdio.h>

void find_leader_elements(int arr[], int n) {
    int leaders[n];
    int max_right = arr[n - 1];
    int leader_count = 1;
    leaders[0] = max_right;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_right) {
            max_right = arr[i];
            leaders[leader_count++] = max_right;
        }
    }
    for (int i = leader_count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
}
int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        find_leader_elements(A, N);
    }
}