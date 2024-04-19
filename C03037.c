#include <stdio.h>
void demSoLanXuatHienCacChuSoNguyenTo(long long n) {
    int demSoLan[10] = {0}; 
	long long k =n;
    while (n > 0) {
        int chuSo = n % 10;
        if (chuSo == 2 || chuSo == 3 || chuSo == 5 || chuSo == 7) {
            demSoLan[chuSo]++;
        }
        n /= 10;
    }
    long long heSo =1,scs=1;
    while(heSo < k) {
    	heSo *=10;
    	scs++;
	}
    heSo/=10;
    while(heSo) {
    	if (demSoLan[k/heSo] > 0) {
            printf("%lld %lld\n", k/heSo, demSoLan[k/heSo]);
            demSoLan[k/heSo]=0;
        }
        k%=heSo;
        heSo/=10;   
	}
}
int main() {
    long long N;
    scanf("%lld", &N);
    demSoLanXuatHienCacChuSoNguyenTo(N);
    return 0;
}
