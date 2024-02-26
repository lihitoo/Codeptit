#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int check =0;
    int temp;
    if(a <= b) {
    	int k=b;
    	for(int i=1; i <= b; i++) printf("%c",97+b-1); 
    	printf("\n");
    	for(int i=1; i < a; i++) {
    	
    	for(int j=1; j <= i; j++) {
    		printf("%c",97+b-j);
    		temp=97+b-j;
		}
    	for(int j=1; j<=b-i ; j++) printf("%c",temp-1);
    	printf("\n");
    
		}
	 }
	else {
		int k=a;
    	for(int i=1; i <= b; i++) printf("%c",97+a-1); 
    	printf("\n");
    	for(int i=1; i < b; i++) {
    	
    	for(int j=1; j <= i; j++) {
    		printf("%c",97+a-j);
    		temp=97+a-j;
		}
    	for(int j=1; j<=b-i ; j++) printf("%c",temp-1);
    	printf("\n");
    
		}
		for(int i=a; i > b; i--) {
		  for(int j=1;j<=b;j++) printf("%c",97+a-j); 
		  printf("\n");
		}
	}
}
