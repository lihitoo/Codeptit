#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_special_character(char ch) {
    return !isalnum(ch);
}
void normalize_word(char *word) {
    int i = 0, j = 0;
    while (word[i]) {
        if (!isalnum(word[i])) {
            i++;
            continue;
        }
        word[j++] = tolower(word[i++]);
    }
    word[j] = '\0';
}

int main() {
    char input[1000];
    
    fgets(input, sizeof(input), stdin);

    // Loại bỏ dấu xuống dòng thừa từ fgets
  //  if ((strlen(input) > 0) && (input[strlen(input) - 1] == '\n')) {
   //     input[strlen(input) - 1] = '\0';
   // }
    char words[1000][100];
    int frequencies[1000] = {0};
    int word_count = 0;

    // Duyệt qua từng từ trong xâu
    char *token = strtok(input, " ");
    while (token != NULL) {
 
        normalize_word(token);
        
        int found = 0, i;
       
        for (i = 0; i < word_count; i++) {
            if (strcmp(words[i], token) == 0) {
                frequencies[i]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(words[word_count], token);
            frequencies[word_count]++;
            word_count++;
        }

        token = strtok(NULL, " ");
    }
    for (int i = 0; i < word_count; i++) {
        printf("%s %d\n", words[i], frequencies[i]);
    }

    return 0;
}
