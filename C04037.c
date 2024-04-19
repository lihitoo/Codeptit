#include <stdio.h>

void count_and_list_duplicates(int arr[], int n) {
    int counts[1001] = {0}; 
    int duplicate_count = 0;
    for (int i = 0; i < n; i++) {
        counts[arr[i]]++;
    }
    for (int i = 0; i <= 1000; i++) {
        if (counts[i] > 1) {
            duplicate_count++;
        }
    }
    printf("%d\n", duplicate_count);
    for (int i = 0; i <= 1000; i++) {
        if (counts[i] > 1) {
            printf("%d ", i);
            duplicate_count++;
        }
    }
     printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    count_and_list_duplicates(array, n);
    return 0;
}
