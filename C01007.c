#include<stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
		printf("%d\n",a+b);
		printf("%d\n",a-b);
		long long e= (long long) a*b;
		printf("%lld\n",e);
		printf("%d\n",a/b);
		printf("%d\n",a%b);
		double c=a;
		double d=b;
		printf("%.2lf",c/d);
}