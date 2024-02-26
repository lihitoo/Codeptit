#include<stdio.h>

int prime_check(int n){
  if(n<2) return 0;
  if(n<4) return 1;
  if(n%2==0 || n%3 == 0)  return 0;
  else{
    for(int i = 5;i*i<=n;i+=6){
      if(n%i==0 || n%(i+2)==0)  return 0;
    }
  }
  return 1;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int a;
		scanf("%d",&a);
		if(prime_check(a) == 1) printf("YES\n");
		else printf("NO\n");
	}
}
