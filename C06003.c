#include <stdio.h>
#include <string.h>

int dem_so_tu(char xau[]) {
    int dem = 0;
    int chuaGapKhoangTrang = 1;

    for (int i = 0; i < strlen(xau)-1; i++) {
        if (xau[i] != ' ' && xau[i+1]== ' ') {
            dem++;
    }
    }
    if(xau[strlen(xau)-1]==' ') dem--;

    return dem+1;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        char xau[200];
        scanf(" %[^\n]", xau);

        int ket_qua = dem_so_tu(xau);
        printf("%d\n", ket_qua);
    }

    return 0;
}
