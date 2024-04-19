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
    //c[strlen(c)-k+i]='\o';
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
        int d =0;
        char temp[99];
        int k=0;
      for(int i=0; i < strlen(name); i++) {
        if(name[i]!=' '&&d==0) {
          while(name[i]!=' '&&isalpha(name[i])) {
            temp[k++]=name[i];
            i++;
            d=1;
          }
        }
         if(name[i]!=' ') {
          while(name[i]!=' '&&isalpha(name[i])) {
            printf("%c",name[i]);
            i++;
            
          }
          if(i!=strlen(name)) printf(" ");
          i--;
        }
          
        
      }
      printf(", ");
      for(int i=0; i<k;i++) {
        if(temp[i]>='a') printf("%c",name[i]-32);
        else printf("%c",name[i]);
      }
      printf("\n");
    }

    return 0;
}
