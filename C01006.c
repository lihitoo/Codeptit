#include<stdio.h>

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	if(b==0) printf("0");
	else {
		printf("%d\n",a+b);
		printf("%d\n",a-b);
		printf("%d\n",a*b);
		printf("%d\n",a/b);
		printf("%d\n",a%b);
		double c=a;
		double d=b;
		printf("%.2lf",c/d);
	}
	
}