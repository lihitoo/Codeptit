#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,d,t;
    scanf("%d", &t);
    
    while(t--) {
    	scanf("%d%d%d%d", &a,&b,&c,&d);
    if(abs(a-b) ==abs(c-d) ) printf("YES\n");
    else printf("NO\n");
	}
}
