#include <stdio.h>

void taoMaTran(int n, int matran[][n]) {
    for (int i = 0; i < n; i++) {
      int k=1;
        for (int j = 0; j < n ; j++) {
            
            if(j>i) {
              matran[i][j] = k;
            k++;
            }
            else matran[i][j] = 0;
        }
    }
}
void inMaTran(int n, int matran[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matran[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
        int matran[n][n];
        taoMaTran(n, matran);
        inMaTran(n, matran);
    

    return 0;
}
