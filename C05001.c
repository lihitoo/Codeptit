#include <stdio.h>
void chuyen_vi_ma_tran(int ma_tran[][10], int so_hang, int so_cot) {
    int ma_tran_chuyen_vi[so_cot][so_hang];
    for (int i = 0; i < so_hang; i++) {
        for (int j = 0; j < so_cot; j++) {
            ma_tran_chuyen_vi[j][i] = ma_tran[i][j];
        }
    }
    for (int i = 0; i < so_cot; i++) {
        for (int j = 0; j < so_hang; j++) {
            printf("%d ", ma_tran_chuyen_vi[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int so_hang, so_cot;
    scanf("%d", &so_hang);
    scanf("%d", &so_cot);
    int ma_tran[so_hang][10];
    for (int i = 0; i < so_hang; i++) {
        for (int j = 0; j < so_cot; j++) {
            scanf("%d", &ma_tran[i][j]);
        }
    }
    chuyen_vi_ma_tran(ma_tran, so_hang, so_cot);
    return 0;
}
