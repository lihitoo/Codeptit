#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		    int N, chuSo, demLe = 0, demChan = 0;
    scanf("%d", &N);
    while (N > 0) {
        chuSo = N % 10;
        if (chuSo % 2 == 0) {
            demChan++;
        } else {
            demLe++;
        }
        N /= 10;
    }
    printf("%d %d\n", demLe, demChan);

	}
}
