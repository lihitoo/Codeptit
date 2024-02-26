#include<stdio.h>

int main() {
		int a;
		scanf("%d",&a);
		int d =10;
		while(a > d) d*=10;
		d/=10;
		printf("%d %d",a/d,a%10);

}
