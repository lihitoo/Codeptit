#include <stdio.h>
void chen_mang(int A[], int n, int B[], int m, int P) {
    for (int i = n + m - 1; i >= P + m; i--) {
        A[i] = A[i - m];
    }
    for (int i = 0; i < m; i++) {
        A[P + i] = B[i];
    }
}
int main() {
    int n, m,t,P;
    int k=1;
    scanf("%d", &t);
    while(t--){
    	printf("Test %d:\n",k++);
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &P);
    int A[n+5];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int B[m+5];
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    chen_mang(A, n, B, m, P);

    for (int i = 0; i < n + m; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");	
	}

    return 0;
}
