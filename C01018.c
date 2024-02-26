#include<stdio.h>

int main() {
  int t;
  scanf("%d",&t);
  while(t--) {
  	int a;
	scanf("%d",&a);
	if((int)sqrt(a)*(int)sqrt(a) == a) printf("YES\n");
	else printf("NO\n");
  }
}
