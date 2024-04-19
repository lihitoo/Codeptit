#include <stdio.h>
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    int check = 0;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        if(num%10 == 9) check =1;
        num /= 10;
    }
    return originalNum == reversedNum && check == 0;
}
int countPalindromes(int N) {
    int count = 0;
    for (int num = 2; num < N; num++) {
        if (isPalindrome(num) ) {
            printf("%d ", num);
            count++;
        }
    }
    return count;
}
int main() {
    int N;
    scanf("%d", &N);
    int result = countPalindromes(N);
        printf("\n%d\n", result);
    return 0;
}
