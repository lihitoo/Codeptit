#include <stdio.h>

int laSoUuTheChan(long long so) {
    if (so % 2 != 0) {
        return 0;
    }
    int demChuSoChan = 0;
    int demChuSoLe = 0;
    while (so != 0) {
        long long chuSo = so % 10;
        if (chuSo % 2 == 0) {
            demChuSoChan++;
        } else {
            demChuSoLe++;
        }
        so /= 10;
    }
    return demChuSoChan > demChuSoLe;
}

int main() {
    long long num ;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&num);
		if (laSoUuTheChan(num)) {
        printf("YES\n");
    	}   else {
        printf("NO\n");
        }
	} 
    

    return 0;
}
