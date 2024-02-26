#include<stdio.h>

int main() {
	int d;
	scanf("%d",&d);
	printf("%d ",d/365);
	d%=365;
	printf("%d ",d/7);
	d%=7;
	printf("%d",d);
}