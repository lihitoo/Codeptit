#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int k=1;
    int check =0;
    for(int i=1; i <= a; i++) {
    	
    	for(int j=k; j >= 2; j--) printf("%d",j);
    	for(int j=1; j<=b-k+1 ; j++) printf("%d",j);
    	k++;
    	printf("\n");
		if(k==b+1) {
    	//	printf("fghfg");
    		break;
		}
	}
	if(a>b) {
		for (int j=1; j <=  a-b; j++) {
		
			for (int i=k; i>= k-b+1; i--) {
			printf("%d",i);
			
			
			}	
			k++;
			printf("\n");
		}
	}
}
