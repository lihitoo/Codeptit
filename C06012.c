#include <stdio.h>
#include <string.h>
int laNguyenTo(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int laSoDep(char numStr[]) {
    int isPalindrome = 1;
    for (int i = 0; i < strlen(numStr) / 2; i++) {
        if (numStr[i] != numStr[strlen(numStr) - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (!isPalindrome) {
        return 0;
    }

    for (int i = 0; i < strlen(numStr); i++) {
        int digit = numStr[i] - '0';
        if (!laNguyenTo(digit)) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        char numStr[501];
        scanf("%s", numStr);
        int result = laSoDep(numStr);
        if (result) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
