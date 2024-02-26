#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int k=0;
    for(int i=1; i <= a; i++) {
    	for(int j=1; j <= k; j++) printf("~");
    	k++;
    	for(int j=1; j <= b; j++) printf("*");
    	printf("\n");
	}
}
