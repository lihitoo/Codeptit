#include <stdio.h>
#include <string.h>

int laSoDep(char s[]) {
    if (strlen(s) > 0 && s[0] == '8' && s[strlen(s) - 1] == '8') {
        int p = 1, sum = 0;
        for (int i = 0; i < strlen(s); i++) {
            sum += s[i] - '0';
            if (s[i] != s[strlen(s) - 1 - i]) {
                p = 0;
                break;
            }
        }
        if (p && sum % 10 == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        char s[501];
        scanf("%s", s);
        int kq = laSoDep(s);
        if (kq) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
