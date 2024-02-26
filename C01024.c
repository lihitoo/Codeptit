#include<stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int a;
		scanf("%d",&a);
		int d =10;
		while(a > d) d*=10;
		d/=10;
		if(a%10 == a/d) printf("YES\n");
		else printf("NO\n");
	}
}
