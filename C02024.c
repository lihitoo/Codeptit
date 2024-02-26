#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    	int k=b;
    	for(int i=1; i <= b; i++) printf("%c",65+i-1); 
    	printf("\n");
    	for(int i=1; i < a; i++) {
    	if(i == b-1) break;
    	for(int j=1; j <= b-i; j++) {
    		printf("%c",65+i-1+j);
		}
    	for(int j=1; j<=i ; j++) printf("%c",65+i-j);
    	printf("\n");
    	
    	}
    	int dif = a-b+1;
    	while(dif>0) {
    		for(int i=b; i>=1;i--) printf("%c",65+i-1);
    		printf("\n");
    		dif--;
		}
}
