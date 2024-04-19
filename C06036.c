#include <stdio.h>
#include <string.h>

int main() {
    char input_str[100001];
    gets(input_str);
    printf("%d\n", strlen(input_str)-1);

    return 0;
}