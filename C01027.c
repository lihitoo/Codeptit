#include<stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int a,b;
		scanf("%d%d",&a,&b);
		while(a!=b) {
			if(a>b) a=a-b;
			if(a<b) b=b-a;
		}
		printf("%d\n",a);
	}
}
