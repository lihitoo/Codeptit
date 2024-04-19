#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[51];
    scanf("\n");
    gets(name);
    
    char email[100];
    int email_index = 0;
    email[email_index++] = tolower(name[0]);
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ') {
            email[email_index++] = tolower(name[i]);
        }
    }
    char add[999];
    int k = 0;
    for (int i = strlen(name) - 1; i >= 0; i--) {
        if (name[i-1] != ' ') {
            add[k++] = tolower(name[i]);
        } else {
            break;
        }
    }
    for (int i = k - 1; i >= 0; i--) {
        email[email_index++] = add[i];
    }
    strcpy(email + email_index, "@ptit.edu.vn");
    printf("%s\n", email);

    return 0;
}

