#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool invalid(char c[]) {
  if(c[0]=='0') return false;
  for (int i = 0; i < strlen(c); i++) {
        if( c[i] < '0' || c[i] > '9') return false;
            
  }
        return true;
  
}
bool has_all_digits(char number[]) {
    bool digits[10] = {false}; 
    int length = strlen(number);
    for (int i = 0; i < length; i++) {
        
        int digit = number[i] - '0';
        digits[digit] = true; 
    }
    for (int i = 0; i < 10; i++) {
        if (!digits[i]) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        char number[1001];
        scanf("%s", number);
        scanf("\n");

        scanf("\n");
        if(invalid(number) == false) printf("INVALID\n");
        else  {if (has_all_digits(number) == false) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }}
    }

    return 0;
}
