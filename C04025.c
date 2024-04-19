#include <stdio.h>

void sapXepChanLe(int arr[], int n) {
    int chan[100], le[100], chanCount = 0, leCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            chan[chanCount++] = arr[i];
        } else {
            le[leCount++] = arr[i];
        }
    }
    for (int i = 0; i < chanCount - 1; i++) {
        for (int j = i + 1; j < chanCount; j++) {
            if (chan[i] > chan[j]) {
                int temp = chan[i];
                chan[i] = chan[j];
                chan[j] = temp;
            }
        }
    }
    for (int i = 0; i < leCount - 1; i++) {
        for (int j = i + 1; j < leCount; j++) {
            if (le[i] > le[j]) {
                int temp = le[i];
                le[i] = le[j];
                le[j] = temp;
            }
        }
    }
    for (int i = 0; i < chanCount; i++) {
        printf("%d ", chan[i]);
    }
    for (int i = 0; i < leCount; i++) {
        printf("%d ", le[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int A[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    sapXepChanLe(A, n);
    return 0;
}
