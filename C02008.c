#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d",&n);
    int k=1;
    for(int i=1; i <= n; i++) {
    	for(int j=1; j <= k; j++) {
    		if(j!=k && i!=n && i != 1 && j != 1) printf(".");
    		else printf("*");
		}
    	k++;
    	printf("\n");
	}
}
