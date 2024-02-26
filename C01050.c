#include <stdio.h>

int main() {
    int chieuRong, chieuCao;
    scanf("%d", &chieuRong);
    scanf("%d", &chieuCao);
    for (int i = 1; i <= chieuCao; i++) {
        for (int j = 1; j <= chieuRong; j++) {
            if (i == 1 || i == chieuCao || j == 1 || j == chieuRong) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
