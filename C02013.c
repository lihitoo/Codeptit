#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    
    int check =0;
    if(a <= b) {
    	int k=b;
    	for(int i=1; i <= a; i++) {
    	
    	for(int j=k; j >= 2; j--) printf("%d",j);
    	for(int j=1; j<=b-k+1 ; j++) printf("%d",j);
    	k--;
    	printf("\n");
		if(k==b+1) {
    	//	printf("fghfg");
    		break;
		}
	}
	}
	else {
		int k=a;
    	for(int i=1; i <= a; i++) {
    	
    	for(int j=k; j >= k-b+1; j--) {
    		if(j==0) break;
    		printf("%d",j);
		}
    	for(int j=2; j<=b-k+1 ; j++) {
    		if(j==0) break;
    		printf("%d",j);
		}
    	k--;
    	printf("\n");
		if(k==0) {
    	//	printf("fghfg");
    		break;
		}
		
	}
	
	}
}
