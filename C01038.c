#include <stdio.h>

int main() {
    int a,k=0,h=1;
    scanf("%d", &a);
    if(a%10) printf("%d", a%10);
    a/=10;
    int c=a;
	while(c>0) {
		c/=10;
		k++;
	}
	k--;
//	printf("%d  ", k);
	int j=k+1;
	while(k) {
		h*=10;
		k--;
	}
//	printf("%d  ", h);
	int l=a/h;
	if(j>1) {
		printf("%d", a%=h);
	}
    printf("%d", l);

    return 0;
}
