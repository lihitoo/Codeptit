#include <stdio.h>
int count_equal_pairs(int nums[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            count++;
        }
    }
    return count;
}
int main() {
    int num_tests, n;
    scanf("%d", &num_tests);
    for (int t = 0; t < num_tests; t++) {
        scanf("%d", &n);
        int nums[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }
        int result = count_equal_pairs(nums, n);
        printf("%d\n", result);
    }
    return 0;
}
