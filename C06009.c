#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_beautiful(char plate[]) {

    char last_digits[6];
    int j = 0;
    for (int i = 6; i < strlen(plate); i++) {
        if(plate[i]!='.')
        last_digits[j++] = plate[i];
    }
    last_digits[5] = '\0';

    if (last_digits[0] == last_digits[1] && last_digits[1] == last_digits[2] && last_digits[2] == last_digits[3] && last_digits[3] == last_digits[4]) {
        return 1; 
    }
    if (last_digits[0] < last_digits[1] && last_digits[1] < last_digits[2] && last_digits[2] < last_digits[3] && last_digits[3] < last_digits[4]) {
        return 1; 
    }
    if ((last_digits[0] == last_digits[1] && last_digits[1] == last_digits[2]) && (last_digits[3] == last_digits[4])) {
        return 1;
    }
    if ((last_digits[0] == '6' || last_digits[0] == '8') && (last_digits[1] == '6' || last_digits[1] == '8') && (last_digits[2] == '6' || last_digits[2] == '8') && (last_digits[3] == '6' || last_digits[3] == '8') && (last_digits[4] == '6' || last_digits[4] == '8')) {
        return 1; 
    }
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        char plate[20];
        scanf(" %[^\n]s", plate);

        if (is_beautiful(plate)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
