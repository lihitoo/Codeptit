#include<stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int a;
		scanf("%d",&a);
		int i=2;
		while(a!=1)
		{
			while(a%i==0) {
				printf("%d ",i);
				a /= i;
			}
			i++;
		}
		printf("\n");
	}
}
