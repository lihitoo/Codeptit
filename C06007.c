#include <stdio.h>
#include <string.h>
int main() {
    
    char s[1005],c[1005];
    gets(s);
    scanf("\n");
    gets(c);
    char* token = strtok(s," ");
    while(token != NULL) {
      if(strcmp(token,c))  
      printf("%s ",token);
      token = strtok(NULL," ");
    }
    return 0;
}
