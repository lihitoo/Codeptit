#include <stdio.h>
#include <string.h>
int la_so_thuan_nghich(char num_str[]) {
    int len = strlen(num_str);
    for (int i = 0; i < len / 2; i++) {
        if (num_str[i] != num_str[len - 1 - i]) {
            return 0;  
        }
    }
    return 1;  
}

int la_so_chan(char num_str[]) {
    int len = strlen(num_str);
    for (int i = 0; i < len; i++) {
        if ((num_str[i] - '0') % 2 != 0) {
            return 0;  
        }
    }
    return 1; 
}
void kiem_tra_so_dep(char num_str[]) {
    if (la_so_thuan_nghich(num_str) && la_so_chan(num_str)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        char num_str[505];
        scanf("%s", num_str);
        kiem_tra_so_dep(num_str);
    }
    return 0;
}
