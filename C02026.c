#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    	int k=b;
    	if (a<b) {
    
    	for(int i=1; i <= a; i++) {
    	  
    	for(int j=b-a+i-1; j >= 1; j--) {
    	  //if(j==a) break;
    		printf("%c",64+b-j);
		}
    	for(int j=1; j<=a-i+1 ; j++) printf("%c",65+b-1);
    	printf("\n");
    	
    	}
    	}
    	else if (a==b) {
    
    	for(int i=1; i <= a; i++) {
    	  
    	for(int j=b-a+i-1; j >= 1; j--) {
    	  //if(j==a) break;
    		printf("%c",64+b-j);
		}
    	for(int j=1; j<=b-i+1 ; j++) printf("%c",65+b-1);
    	printf("\n");
    	
    	}
    	}
    	else {
    	  int dif = a-b+1;
    	
    	while(dif>0) {
    		for(int i=b; i>=1;i--) printf("%c",65+b-1);
    		printf("\n");
    		dif--;
		}
    	for(int i=1; i <= a-b; i++) {
    	  if(i==b) break;
    	  int x=0;
    	for(int j=1; j <= i; j++) {
    	  
    		printf("%c",64+b-i+x);
    		x++;
		}
    	for(int j=1; j<=b-i ; j++) printf("%c",65+b-1);
    	printf("\n");
    	
    	}
    	}

}
