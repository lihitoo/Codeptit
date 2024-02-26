#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d",&n);
    int k=1;
    for(int i=1; i <= n; i++) {
    	for(int j=1; j <= n-k; j++) printf("~");
    	k++;
    	for(int j=1; j <= n; j++) {
    		if(j!=n && i!=n && i != 1 && j != 1) printf(".");
    		else printf("*");
		}
    	printf("\n");
	}
}
