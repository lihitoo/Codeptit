#include <stdio.h>
void chuyen_vi_ma_tran(int ma_tran[100][100], int so_hang, int so_cot) {
    int ma_tran_chuyen_vi[100][100];
    for (int i = 0; i < so_hang-1; i++) {
        for (int j = 0; j < so_cot-1; j++) {
            ma_tran_chuyen_vi[i][j] = ma_tran[i+1][j+1];
        }
    }
    for (int i = 0; i < so_hang-1; i++) {
        for (int j = 0; j < so_cot-1; j++) {
            printf("%d ", ma_tran_chuyen_vi[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++) {
      int so_hang, so_cot;
    scanf("%d", &so_hang);
    scanf("%d", &so_cot);
    int ma_tran[100][100];
    for (int i = 0; i < so_hang; i++) {
        for (int j = 0; j < so_cot; j++) {
            scanf("%d", &ma_tran[i][j]);
        }
    }
    printf("Test %d:\n", i);
    chuyen_vi_ma_tran(ma_tran, so_hang, so_cot);
    
    }
    return 0;
}
