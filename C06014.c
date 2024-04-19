#include <stdio.h>
#include <string.h>
#include <ctype.h>

void standardize_word(char word[]) {
    word[0] = toupper(word[0]);
    for (int i = 1; i < strlen(word); i++) {
        word[i] = tolower(word[i]);
    }
}

void standardize_name(char name[]) {
    int length = strlen(name);
    for (int i = 0; i < length; i++) {
        if ((i == 0 || name[i - 1] == ' ') && isalpha(name[i])) {
            standardize_word(&name[i]);
        }
    }
}
void erase(char c[],int k) {
  for(int i=k;i<strlen(c)-1;i++) {
    c[i] = c[i+1];
    c[strlen(c)-k+i]='\o';
  }
}
int main() {
    int num_tests;
    scanf("%d", &num_tests);
    getchar(); 
    for (int t = 0; t < num_tests; t++) {
        char name[999]; 
        scanf("\n");
        gets(name);
        scanf("\n");
        standardize_name(name);
       // for(int i=0; i<strlen(name)-1; i++) {
          //printf("%s\n",  name);
         // while(name[i]==' '&&name[i+1]==' ') {
         //   erase(name,i+1);
         // }
       // }
        //erase(name,5);
       // char* token = strtok(name,' ');
       // while(token != NULL) {
          //printf("%s ",token);
          //token=strtok(NULL,' ');
        //}
        // if (name[strlen(name) - 1] == '\n') {
        //     name[strlen(name) - 1] = '\0';
        // }
        //printf("%d",strlen(name));
      for(int i=0; i < strlen(name); i++) {
        if(name[i]!=' ') {
          while(name[i]!=' '&&isalpha(name[i])) {
            printf("%c",name[i]);
            i++;
            
          }
          printf(" ");
          i--;
        }
          
        
      }
      printf("\n");
      //printf("%s\n",  name);
      //printf("\n");
       // printf("%s\n",  name);
    }

    return 0;
}
