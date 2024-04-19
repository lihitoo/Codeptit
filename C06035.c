#include <stdio.h>
#include <string.h>
int isPalindrome(char s[]) {
    int len = strlen(s);
    int count=0;
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            count++;
            if(count>1)
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int T;
    scanf("%d\n", &T);
    for (int t = 0; t < T; t++) {
        char s[50];
       // scanf("%s", s);
       //fgets(s, sizeof(s), stdin);
       gets(s);
     //  scanf("\n");
      // scanf("%[^\n]", s);
       //fgets(s, sizeof(s), stdin);
      // scanf("\n");
      //  printf("%s %d",s,strlen(s));
        if (isPalindrome(s)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
