#include <stdio.h>
#include <string.h>
int main() {
    char s[1005],c[1005];
    gets(s);
    char* words[100];  
    int count = 0;     
    char* token = strtok(s, " ");
    while (token != NULL) {
        words[count] = token;
        count++;
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < count; i++) {
        int check = 0;
        for (int j = 0; j < i; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                check = 1;
                break;
            }
        }
        if (!check) {
            printf("%s ", words[i]);
        }
    }
    return 0;
}
